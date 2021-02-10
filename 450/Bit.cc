#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int n=0;int res = 0;
	for(int i=0;i<t;i++){
		
		string s; cin>>s;
		if(s=="++X" || s =="X++"){
			res++;
		}
		else if(s=="--X"|| s == "X--"){
			res--;
		}
	}
	cout<<res;
}