#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e5+8;
ll n, s, dem = 0;
ll a[limit], f[limit] = {0};

void sub1() {
    for (ll i = 1; i <= n; i++) {
        for (ll j = i; j <= n; j++) {
            ll tmp = abs(f[j] - f[i - 1]);
            if (tmp > s) dem++;
        }
    }
    cout << dem;
}

void sub2() {
    sort(f, f + n + 1);
    ll j = 0;
    for (ll i = 0; i <= n; i++) {
        while(j <= n && f[j] - f[i] <= s) {
            j++;
            if (j > n) break;
        }
        dem += (n-j+1);
    }
    cout << dem;
}

int main() {
    io;
    cin >> n >> s;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    if (n <= 1e3) sub1();
    else sub2();
}
