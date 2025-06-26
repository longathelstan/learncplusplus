#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    ll n, a[limit], d[limit] = {0}, tmp = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];

        if (a[i] > tmp) d[i] = d[i - 1] + 1;
        else d[i] = 1;
        tmp = a[i];
    }
    for (ll i = 1; i <= n; i++) cout << d[i] << " ";
}
