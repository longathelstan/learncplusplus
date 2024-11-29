#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;
int main() {
//    freopen("LESSK.INP", "r", stdin);
//    freopen("LESSK.OUT", "w", stdout);
    int t;
    ll n, k, a[limit], tong = 0, dem = 0, dem1 = 0;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        tong = 0, dem = 0;
        cin >> n >> k;
        for (int j = 1; j <= n; j++) {
            cin >> a[j];
            if (a[j] <= k) dem++;
        }
        for (int j = 1; j <= dem; j++) {
            if (a[j] <= k) dem1++;
        }
        tong = dem1;
        for (int j = dem + 1; j <= n; j++) {
            if (a[i] <= k) dem1++;
            if (a[i - dem] <= k) dem1--;

            tong = max(tong, dem1);
        }

    }
}
