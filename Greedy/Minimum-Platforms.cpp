#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 6;
	int arr[n] = {900, 940, 950, 1100, 1500, 1800};
	int dep[n] = {910, 1200, 1120, 1130, 1900, 2000};
	sort(arr,arr+n);
	sort(dep,dep+n);
	int i=1;
	int j=0;
	int platform = 1;
	int maxi = 1;
	int result = 1;
	while(i<n && j <n){
		if(arr[i]<=dep[j]){
			platform++;
			i++;
		}
		else if(dep[j]<arr[i]){
			platform--;
			j++;
		}
		if(platform>maxi){
			maxi = platform;
		}
	}
	cout<<maxi;
}
