#include <bits/stdc++.h>
#define ll long long
#define el "\n"
using namespace std;
const int limit = 1e6+8;

void sub1(ll n, const ll a[limit], const ll f[limit]) {
    ll result = LLONG_MIN;
    int d = 0, c = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            ll sum = f[j] - f[i - 1];
            if (result < sum) {
                result = sum;
                d = i;
                c = j;
            }
        }
    }
    cout << result << el;
    for (int i = d; i <= c; i++) {
        cout << a[i] << " ";
    }
}
void sub2(ll n, const ll a[limit], const ll f[limit]) {
    ll vtdau, vtcuoi;
    ll result = LLONG_MIN;
    ll minf[limit], vt[limit];
    minf[1] = f[1];
    for (int i = 1; i <= n; i++) {
        if (f[i] < minf[i - 1]) {
            minf[i] = f[i];
            vt[i] = i;
        } else {
            minf[i] = minf[i - 1];
            vt[i] = vt[i - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        ll sum = f[i] - minf[i - 1];
        if (result < sum) {
            result = sum;
            vtdau = vt[i - 1] + 1;
            vtcuoi = i;
        }
    }
    cout << result << el;
    for (int i = vtdau; i <= vtcuoi; i++) {
        cout << a[i] << " ";
    }

}
int main() {
    freopen("MAXMIN.INP", "r", stdin);
    freopen("MAXMIN.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, a[limit], f[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    if (n <= 1e3) sub2(n, a, f);
    else sub2(n, a, f);
}
