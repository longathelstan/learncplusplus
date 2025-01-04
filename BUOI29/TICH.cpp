#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn=1e6+8;
ll n,a[maxn],b[maxn];
void sub1(){
	ll smin=1e9,smax=-1e9;
	for(ll i=1;i<n;i++){
		for(ll j=i+1;j<=n;j++){
			smin=b[i]*b[j];
			smin=min(smin,a[i]*a[j]);
			smax=max(smax,smin);
		}
	}
	cout<<smax;
}
void sub2() {
    ll ans = 0;
    ll i = 1, j = 1;
    while(i <= n && j <= n) {
        ll hanhiu1 = a[i] * a[j];
        ll hanhiu2 = b[i]* b[j];
        if (hanhiu1 < hanhiu2) {
            ans = max(ans, hanhiu1);
            i++;
        } else {
            ans = max(ans, hanhiu2);
            j++;
        }
        if (j == n) {
            i++;
        }
    }
    cout << ans;
}

int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		cin>>b[i];
	}
	sub2();
	return 0;
}
