#include <bits/stdc++.h>
#define ll int
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    ll n, ans = 0;
    ll a[limit];
    unordered_map<int, ll> mp;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += mp[a[i] - i];
        mp[a[i] - i]++;
    }
    cout << ans;
}
