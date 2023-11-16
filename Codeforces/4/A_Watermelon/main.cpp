// https://codeforces.com/contest/4/problem/A

#include<iostream>
using namespace std;
int main ()
{
	int w;
	cin>>w;
	if(w>=3){
	if(w%2)cout<<"NO";
	else cout<<"YES";
	}
	else cout<<"NO";
	return 0; 
}