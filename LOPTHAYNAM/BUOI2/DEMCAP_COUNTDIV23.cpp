#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;
int main() {
    io;
    int n, a[limit], ans = 0;
    map<int, int> mp;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i] = x % 23;
    }
    for (int i = 7; i <= n; i++) mp[a[i]]++;
    for (int i = 1; i <= n - 6; i++) {
        ans += mp[a[i]];
        mp[a[i + 6]]--;
    }
    cout << ans;
}
