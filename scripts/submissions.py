import os
import requests
import re
from bs4 import BeautifulSoup

def clean_problem_name(problem_name):
    # Replace spaces with underscores and remove '?'
    return re.sub(r'[\s\?]', '_', problem_name)

def get_submission_source(submission):
    submission_url = f"https://codeforces.com/contest/{submission['contest_id']}/submission/{submission['id']}"
    response = requests.get(submission_url)

    if response.status_code == 200:
        soup = BeautifulSoup(response.text, 'html.parser')

        source_code_tag = soup.find('pre', {'id': 'program-source-text'})
        if source_code_tag:
            return source_code_tag.text.strip()
        else:
            print("Source code not found on the page.")
            return None
    else:
        print(f"Error: {response.status_code} for submission {submission['id']}")
        return None

def get_accepted_submissions(handle):
	api_url = "https://codeforces.com/api/user.status"
	
	params = {
		"handle": handle,
		"from": 1,  # Starting from the first submission
		"count": 1000  # Adjust the count based on your needs
	}

	response = requests.get(api_url, params=params)

	if response.status_code == 200:
		data = response.json()
		submissions = data.get("result", [])

		latest_submissions = {}  # Dictionary to store the latest submission for each problem

		for submission in submissions:
			if submission["verdict"] == "OK":
				problem_id = (submission["contestId"], submission["problem"].get("index"))

				# Check if the submission is the latest for the problem
				if problem_id not in latest_submissions or submission["id"] > latest_submissions[problem_id]["id"]:
					latest_submissions[problem_id] = {
						"id": submission["id"],
						"contest_id": submission["contestId"],
						"problem_index": submission["problem"].get("index"),
						"problem_name": submission["problem"]["name"]
					}

		accepted_submissions = list(latest_submissions.values())
		return accepted_submissions
	else:
		print("Found no submissions")
		return None

def create_folders_and_write_submissions(submissions):

    organized_submissions = {}
    for submission in submissions:
        contest_id = submission['contest_id']
        problem_index = submission['problem_index']

        organized_submissions.setdefault(contest_id, {}).update({problem_index: submission})

    # Create Codeforces directory
    codeforces_directory = os.path.join(os.getcwd(), 'Codeforces')
    os.makedirs(codeforces_directory, exist_ok=True)

    # Download and organize submissions
    for contest_id, problems in organized_submissions.items():
        contest_directory = os.path.join(codeforces_directory, str(contest_id))
        os.makedirs(contest_directory, exist_ok=True)

        for problem_index, submission in problems.items():
            problem_name = submission['problem_name']
            problem_directory_name = f"{problem_index}_{clean_problem_name(problem_name)}"

            problem_directory = os.path.join(contest_directory, problem_directory_name)
            os.makedirs(problem_directory, exist_ok=True)

            # Write submission to main.cpp
            with open(os.path.join(problem_directory, 'main.cpp'), 'w') as file:
                source_code = get_submission_source(submission)
                file.write(source_code)

if __name__ == "__main__":
	user_handle = input("Enter your codeforces handle : ")

	while not user_handle.strip():
		print("Handle cannot be empty. Please enter a valid Codeforces handle.")
		user_handle = input("Enter your codeforces handle : ")

	submissions = get_accepted_submissions(user_handle)

	if submissions is not None:
		print("Got " + str(len(submissions)) + " submissions by " + user_handle)
		create_folders_and_write_submissions(submissions)
		print("Successfully written all submissions")