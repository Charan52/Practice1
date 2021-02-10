#include<bits/stdc++.h>
using namespace std;
bool isvowel(char t){
	string vowel = "aeiouy";
	for (int i=0;i<vowel.length();++i){
		if(t==vowel[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string s; cin>>s;
	string s1 = "";
	for(int i=0;i<s.length();i++){
		s[i] = tolower(s[i]);
		if(isvowel(s[i])!=false){
			cout<<"."<<s[i];
		}
	}
	// s
}