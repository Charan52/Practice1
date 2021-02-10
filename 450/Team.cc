#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t ; cin>>t;
	ll c=0;
	for(ll i=0;i<t;i++){
		ll a[3],c1=0;
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		for(int i=0;i<3;i++){
			if(a[i] == 1){
				c1+=1;
			}
		}
		if(c1>=2) {
			c+=1;
		}

	}
	cout<<c<<endl;
}