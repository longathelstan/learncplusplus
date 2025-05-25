#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5 + 5;

int n, m;
ll a[limit], prefix[limit];

void backtrack() {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
    }
}
int main() {
    io;
    cin >> n;
    backtrack();
    cin >> m;
    while (m--) {
        ll p;
        cin >> p;
        int l = 0, r = n - 1, ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (prefix[mid] >= p) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (ans == -1) cout << -1 << " ";
        else cout << ans + 1 << " ";
    }
}
