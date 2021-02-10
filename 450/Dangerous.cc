#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int start = 0 , end = s.length()-1;
	int count = 0,maxcount = INT_MIN;
	int res[s.length()] = {0};
	int k=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == s[i+1]){
			res[k]+=1;
		}
		else{
			k++;
		}
		// maxcount = max(count,maxcount);
	}
	int p = sizeof(res)/sizeof(res[0]);
	for(int i=0;i<p;i++){
		// printf("%d ",res[i] );
		maxcount = max(maxcount,res[i]+1);
	}
if(maxcount >= 7){
	cout<<"YES";
}
else{
	cout<<"NO";
}
}