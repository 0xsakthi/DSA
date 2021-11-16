#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int x,int low,int high){


	while(low<=high){
		int mid = low +(high-low)/2;

		if (arr[mid]==x)
		{
			return mid;
		}
		else if (arr[mid]<x)
		{
			low = mid+1;
		}
		else{
			high = mid-1;
		}

	}

	return 0;
}

int main(){

	int arr[10] = {2,9,5,32,12,0,7,8,19,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	// cout << n;
	sort(arr,arr+n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i];
	}
	int low = 0;
	int high = sizeof(arr)/sizeof(arr[0]);
	cout << "index value of x:"<<binarysearch(arr,5,low,high);
	return 0;

}