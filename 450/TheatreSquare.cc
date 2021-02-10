#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,m,a,mult=1;
	cin>>n>>m>>a;
	if(n%a ==0){
		mult*= n/a;
	}
	else{
		mult*= (n/a+1);
	}
	if(m%a ==0){
		mult*= m/a;
	}
	else{
		mult*= (m/a+1);
	}
	cout<<mult<<endl;
}