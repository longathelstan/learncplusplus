#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e4+8;
int main() {
    io;
    int n, k, a[limit], ans = 0;
    unordered_map<int, int> mp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += mp[a[i] - k];
        mp[a[i]]++;
    }
    cout << ans;
}
