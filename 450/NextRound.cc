#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n; cin>>n;
	ll k; cin>>k;
	ll a[n],c=0;
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (ll i = 0; i < n; ++i)
	{
		if(a[i] >= a[k-1] && (a[k-1]!=0 || a[i]!=0)){
			c+=1;
		}
		if(a[i] < a[k-1]){
			break;
		}
	}
	cout<<c<<endl;
}