#include <bits/stdc++.h>
using namespace std;
const int t=1e6+1;
long long a[t];
int n;
long long x,g,h=1;
long long lcm(int a,int b)
{
    return a*(b/__gcd(a,b));
}
int main()
{
    freopen("BANCUNG.INP","r",stdin);
    freopen("BANCUNG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;
    cin>>a[1];
    long long k=a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        k=lcm(k,a[i]);
    }
	if(x%k==0) cout<<x;
	else {long long j=x/k; cout<<k*(j+1);  }

    return 0;
}
