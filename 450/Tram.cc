#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;int maxi = INT_MIN;
	int ans = 0;
	while(t--){
		int a,b; cin>>a>>b;
		ans-=a;
		ans+=b;
		maxi =max(maxi,ans);
	}
	cout<<maxi<<endl;
}