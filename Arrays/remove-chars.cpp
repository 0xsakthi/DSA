// https://practice.geeksforgeeks.org/problems/remove-character3815/0/?page=2&company[]=Zoho&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1 = "computer";
	string s2 = "cat";
	for(auto x:s2){
		s1.erase(remove(s1.begin(),s1.end(),x),s1.end());
	}
	cout<<s1;	

 }
