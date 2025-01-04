//<3haanhhsomuchhh
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+8;
int main() {
    ll n, a[limit], f[limit] = {0};
    unordered_map<ll, ll> m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    ll tong = 0, tempi = 0;
    bool hanhoi = false;
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i + 1]) {
            if (!hanhoi) {
                tempi = i;
                hanhoi = true;
            }
            ll temptong = f[i + 1] - f[tempi - 1];
            if (temptong >= tong) {
                tong = temptong;
                m[tempi] = i + 1;
            }
        } else {
            tempi = i;
            hanhoi = false;
        }
    }
    cout << tong << endl;
    for (auto x : m) {
//        cout << x.first << " " << x.second << endl;
        if (f[x.second] - f[x.first - 1] == tong) {
            for (ll i = x.first; i <= x.second; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}
