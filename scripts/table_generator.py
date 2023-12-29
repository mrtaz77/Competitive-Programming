import requests

def get_accepted_submissions_info(handle):
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
						"problem_name": submission["problem"]["name"],
						"rating": submission["problem"].get("rating", "N/A"),
						"tags": submission["problem"].get("tags")
					}

		accepted_submissions = list(latest_submissions.values())
		return accepted_submissions
	
	else:
		print(f"Error: {response.status_code}")
		return None

def write_to_log(accepted_submissions):
	with open("TABLE.md", "w") as file:
		file.write("|Contest|Index|Problem|Rating|Tags|\n")
		file.write("|-|-|-|-|-|\n")
		for submission in accepted_submissions:
			tags = ', '.join([f"`{tag}`" for tag in submission.get("tags", [])])
			file.write(
				f"|{submission['contest_id']}|{submission['problem_index']}|"
				f"{submission['problem_name']}|{submission['rating']}|{tags}|\n"
			)


if __name__ == "__main__":
	user_handle = input("Enter your codeforces handle : ")

	while not user_handle.strip():
		print("Handle cannot be empty. Please enter a valid Codeforces handle.")
		user_handle = input("Enter your codeforces handle : ")

	accepted_submissions_info = get_accepted_submissions_info(user_handle)

	if accepted_submissions_info is not None:
		write_to_log(accepted_submissions_info)
