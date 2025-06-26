#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,x;cin>>n>>x;
	int a[n];
	int dem=0;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int c ;
    for(int i=0;i<n;i++)
	{
    	  c = lower_bound(a + i + 1,a + n, x - a[i] + 1) - a;
    	  dem = dem + (c-(i+1));
    }
    cout<<dem;
	return 0;
}
