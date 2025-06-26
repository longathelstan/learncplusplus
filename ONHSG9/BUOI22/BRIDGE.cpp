#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int n;
ll s;
ll a[limit], f[limit] = {0};

void sub1() {
    ll dem = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ll temp = f[j] - f[i - 1];
            if (temp == s) dem++;
        }
    }
    cout << dem;
}

void sub2() {
    ll t = 0, j = 1, dem = 0;
    for (int i = 1; i <= n; i++) {
        t += a[i];
        while (t >= s) {
            if (t == s) dem++;
            t = t - a[j];
            j++;
        }
    }
    cout << dem;
}

int main() {
    freopen("BRIDGE.INP", "r", stdin);
    freopen("BRIDGE.OUT", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    if (n <= 1) sub1();
    else sub2();

}
