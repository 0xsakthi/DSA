/*
Input:
N = 5
A[] = {1,2,3,5}
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
	vector<int> v;
	vector<int> w;
	int n = 5;
	v = {1,2,3,5};
	int intsum = n*(n+1)/2;
	int totalsum = 0;
	cout << intsum<<endl;
	sort(v.begin(),v.end());
	for (int i = 0; i < n; ++i)
	{
		totalsum += v[i];
	}
	cout << totalsum;
}

class Solution{
  public:
    int MissingNumber(vector<int>& array, long n) {
    	int intsum = n*(n+1)/2;
    	int totalsum = 0;
    	sort(array.begin(),array.end());
    	for (int i = 0; i < n-1; ++i)
    	{
            totalsum +=array[i];
    	}
    	return intsum-totalsum;

    }