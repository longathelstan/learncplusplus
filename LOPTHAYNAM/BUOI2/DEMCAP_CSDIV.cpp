#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n, x;
    ll cnt[3] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        cnt[(x % 3 + 3) % 3]++;
    }
    ll ans = cnt[0] * (cnt[0] - 1) / 2 + cnt[1] * cnt[2];
    cout << ans << '\n';
}
