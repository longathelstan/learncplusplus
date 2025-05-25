#include <bits/stdc++.h>
#define io ios::sync_with_stdio(0); cin.tie(0);
#define file freopen("CAPCHIA.INP", "r", stdin); freopen("CAPCHIA.OUT", "w", stdout);
#define ll long long
using namespace std;

const int limit = 1e6+8;

int main() {
    io;
    file;
    int n, a[limit], maxA = 0, d[limit] = {0};
    ll dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        d[a[i]]++;
        maxA = max(maxA, a[i]);
    }
    for (int i = 1; i <= maxA; i++) {
        if (d[i] == 0) continue;
        dem += 1LL * d[i] * (d[i] - 1) / 2;
        for (int j = i * 2; j <= maxA; j += i) {
            if (d[j]) {
                dem += 1LL * d[i] * d[j];
            }
        }
    }
    cout << dem;
}
