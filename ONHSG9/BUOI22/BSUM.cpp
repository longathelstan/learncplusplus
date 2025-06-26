#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int n;
ll a[limit], s;

void sub2() {
    ll t;
    int minn = 1e6+1;
    int j = 1;
    for (int i = 1; i <= n; i++) {
        t += a[i];
        while (t >= s) {
            minn = min(minn, i - j + 1);
            t -= a[j];
            j++;
        }
    }
    cout << minn;
}

int main() {
    freopen("BSUM.INP", "r", stdin);
    freopen("BSUM.OUT", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sub2();
}
