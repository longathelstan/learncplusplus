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
    ans = -1e16+1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        if(b[i]==a[i])
        {
            d++;
        }
    }
    if(d==n)
    {
        sort(a+1,a+n+1);
        cout<<a[n]*a[n-1];
    }
    else
    {
    int i = 1,j = 1;
    while(i<=n&&j<=n) {
        if(i==j) j=i+1;
    	long long haanhiuuoi1 = a[i]*a[j];
    	long long haanhiuuoiii2 = b[i]*b[j];
    	if(haanhiuuoi1<haanhiuuoiii2) {
    		ans = max(ans,haanhiuuoi1);
    		i++;
    	}
    	else if(haanhiuuoi1>haanhiuuoiii2)
        {
    		ans = max(ans,haanhiuuoiii2);
    		j++;
		}
		else
		{
		    ans = max(ans,min(haanhiuuoi1,haanhiuuoiii2));
		    i++;
		    j++;
		}
		if(j==n) {
			i++;
		}
    }
    cout << ans;
    }
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
