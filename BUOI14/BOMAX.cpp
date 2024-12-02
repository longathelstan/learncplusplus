#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
		ll s=0;
	for(ll i=0;i<3;i++) s+=a[i];
	ll s1=s;
    ll id=0;
    for(ll i=3;i<n;i++){
    	s=s+a[i]-a[i-3];
    	if(s>s1){
    		s1=s;
    		id=i-3+1;
    	}
    }
    cout<<s1<<"\n";
    cout<<1+id<<" "<<id+3;
	return 0;
}
