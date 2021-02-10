#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	set<char>s1;
	int count = 0,n = s.length();
	for(int i=0;i<n;i++){
		s1.insert(s[i]);
	}
	if(s1.size()%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
}