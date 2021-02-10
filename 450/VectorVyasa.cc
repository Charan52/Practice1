#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int pos=0,neg=0;
	while(t--){
		int a[3];
		for (int i = 0; i < 3; ++i)
		{
			/* code */
			cin>>a[i];
		}
		for (int i = 0; i < 3; ++i)
		{
			/* code */
			if(a[i] > 0){
				pos+=a[i];
			}
			else{
				neg+=a[i];
			}
		}
	}
	// cout<<pos<<endl;
	// cout<<neg<<endl;
	int res = pos+neg;
	if(res ==0) cout<<"YES"<<endl;
	else{
		cout<<"NO"<<endl;
	}
}