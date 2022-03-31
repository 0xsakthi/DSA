#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	int arr[n]={2,3,1,2,3};
	vector<int> v;
	for(int i=0;i<n;i++){
		if(count(arr,arr+n,arr[i])>1 and count(v.begin(),v.end(),arr[i])<1){
			v.push_back(arr[i]);
			cout<<arr[i];
		}
	}
	// cout<<v.size();
}
