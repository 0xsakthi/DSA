#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "011";
	long long cnt = 0;
   for (long long i = 0; i < s.size(); i++){
        for (long long len = 1; len <= s.size() - i; len++){
            string l= s.substr(i, len);
            string k = s.substr(i, len);
            reverse(l.begin(),l.end());
            if(l==k){
            	cnt++;
            }

        }
   }
   cout<<cnt;

}
