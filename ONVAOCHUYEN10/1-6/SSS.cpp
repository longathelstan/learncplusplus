#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("SSS.INP", "r", stdin); freopen("SSS.OUT", "w", stdout);
using namespace std;

int main() {
    io;
    file;
    ll n, tong = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        tong += pow(i, 3);
    }
    cout << tong;
}
