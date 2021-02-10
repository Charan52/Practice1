#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count = 0;
	int n = s.length();
	sort(s.begin(),s.end());
	string str2 = "";
	for(int i=0;i<s.length();i++){
		if(s[i] == '+'){
			count++;
		}
	}
	for(int i=count;i<s.length();++i){
		str2+=s[i];
	}
	for(int i=0;i<str2.length()-1;++i){
		cout<<str2[i]<<"+";
	}
	cout<<str2[str2.length()-1];
}