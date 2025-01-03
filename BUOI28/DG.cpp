#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
freopen("DG.INP", "r", stdin);
freopen("DG.OUT", "w", stdout);
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    ll n;
    cin >> n;
    ll x = n / 5;
    while(x >= 0) {
        ll hanhoi = n - 5 * x;
        if (hanhoi % 3 == 0) {
            ll y = hanhoi / 3;
            cout << x << "\n" << y;
            return 0;
        }
        x--;
    }
    cout << -1;
}
