#include <bits/stdc++.h>
#define io ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n+1), pre(n+1, 0);

    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin()+1, a.end());

    for (int i = 1; i <= n; i++) pre[i] = pre[i-1] + a[i];

    while (q--) {
        long long x;
        cin >> x;
        int ans = upper_bound(pre.begin()+1, pre.end(), x) - pre.begin() - 1;
        cout << ans << "\n";
    }
}

