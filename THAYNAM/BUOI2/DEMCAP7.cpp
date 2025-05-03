#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n;
    cin >> n;
    unordered_map<int, ll> A, B, C;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        A[x]++;
    }
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        B[x]++;
    }
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        C[x]++;
    }

    ll ans = 0;
    for (auto [val, cntA] : A) {
        if (B.count(val) && C.count(val)) {
            ans += cntA * B[val] * C[val];
        }
    }

    cout << ans << "\n";
}
