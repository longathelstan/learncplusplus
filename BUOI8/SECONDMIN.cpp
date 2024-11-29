#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long

int main() {
    freopen("SECONDMIN.INP", "r", stdin);
    freopen("SECONDMIN.OUT", "w", stdout);
    int n;
    ll a[limit], maxx = 1e9+1, maxx2 = 1e9+1;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxx = min(a[i], maxx);

    }
    for(int i = 1; i <= n; i++) {
        if (maxx2 > a[i]) {
            if(a[i] != maxx) maxx2 = a[i];
        }
    }
    if (maxx2 == 1e9+1) cout << "NO";
    else cout << maxx2;
}

