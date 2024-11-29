#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    ll n,dem = 0;
    ll a[limit], f[limit] = {0};
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i  = 0; i <=n ; i++) {
        if (f[i] == 0) dem++;
    }
    cout << dem;
}
