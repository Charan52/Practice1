#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,sum=0;
	cin>>a>>b>>c;
	int res = c*(c+1)/2;
	sum = a*res;
	int diff = sum-b;
	if(diff >0){
		cout<<diff<<endl;
	}
	else{
		cout<<'0'<<endl;
	}
}