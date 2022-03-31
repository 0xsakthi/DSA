#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern2(int n){

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern3(int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern4(int n){

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}
void pattern5(int n){

	for(int i=1;i<=2*n-1;i++){
		int res = i;
		if(i>n){
			res=2*n-i; //if i loop is greater than n ,2n-i->10-6=4start printed
		}
		for(int j=1;j<=res;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern6(int n){

	for(int i=1;i<=n;i++){
		int space = n-i;
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern7(int n){

	for(int i=1;i<=n;i++){
		int space = i-1;
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=i;j<=n;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern8(int n){
	for(int i=1;i<=n;i++){
		int space = n-i;
		int res = i+(i-1); //formulae -> i=1->i+(i-1)->1 so j loop run one time if i==5 -> res=5+(5-1)=9->so nine time j loop will run
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=res;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern9(int n){
	for(int i=1;i<=2*n-1;i++){
		int space = n-i;
		int res = i;
		if(res>n){
			res=n-(i-n); //if i>5,res = 5-(6-n)->5-1->4 so 4 start will br printed
			space = i-n; //same , space = i-1,6-5->1,7-5->2,in the order spaces will be print
		}
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=res;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}
void pattern10(int n){
	for(int i=1;i<=n;i++){
		int space = n-i;
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
void pattern11(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j or (i+j)==n-1){
				cout<<i;
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
void pattern12(int n){
	int k = n*2;
	int space = (k)-2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int l=1;l<=space;l++){
			cout<<" ";
		}
		for(int m=1;m<=i;m++){
			cout<<"*";
		}
		cout<<"\n";
		space-=2;
	}
	// int k = n*2;
	// int space = (k)-2;
	int sapce = 0;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int l=1;l<=space;l++){
			cout<<" ";
		}
		for(int m=1;m<=i;m++){
			cout<<"*";
		}
		cout<<"\n";
		space+=2;
	}



}
int main(){

	// pattern1(5);
	// *****
	// *****
	// *****
	// *****
	// *****
	// pattern2(5);
	// *
	// **
	// ***
	// ****
	// *****
	// pattern3(5);
	// *****
	// ****
	// ***
	// **
	// *
	// pattern4(5);
	// 1 
	// 1 2 
	// 1 2 3 
	// 1 2 3 4 
	// 1 2 3 4 5
	// pattern5(5);
	// *
	// **
	// ***
	// ****
	// *****
	// ****
	// ***
	// **
	// *
	// pattern6(5);
	//     *
	//    **
	//   ***
	//  ****
	// *****
	// pattern7(5);
	// *****
	//  ****
	//   ***
	//    **
	//     *
	// pattern8(5);
	// pattern9(5);
	    // * 
	//    * * 
	//   * * * 
	//  * * * * 
	// * * * * * 
	//  * * * * 
	//   * * * 
	//    * * 
	//     *
	// pattern10(5);
	//     *****
	//    *****
	//   *****
	//  *****
	// *****
	pattern11(5); 
	// 0      0
 // 	 1   1 
 //  	   2  
 // 	 3   3 
	// 4       4
	// pattern12(5);
}