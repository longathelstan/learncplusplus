#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

const int limit = 1e6+8;
ll a[limit], f1[limit], f2[limit];
int n;

ll khovl(ll b[]) {
    ll maxsum = b[1], tmp = b[1];
    for (int i = 2; i <= n; ++i) {
        tmp = max(b[i], tmp + b[i]);
        maxsum = max(maxsum, tmp);
    }
    return maxsum;
}

int main() {
    io;
    freopen("KADANE.INP", "r", stdin);
    freopen("KADANE.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            f1[i] = a[i];
            f2[i] = -a[i];
        } else {
            f1[i] = -a[i];
            f2[i] = a[i];
        }
    }
    ll tmp1 = khovl(f1);
    ll tmp2 = khovl(f2);

    cout << max(tmp1, tmp2);
}
