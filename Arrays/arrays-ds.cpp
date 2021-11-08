/*
arrays-DS from DSA Categorie
https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true

#input
4
1 4 3 2
-------
#output
2 3 4 1
*/

#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	//cout << arr[0];
	//cout << n;
	for (int i = n-1; i > -1; --i){

		cout << arr[i]<<" ";
	}

}
