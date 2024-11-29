#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long

int main() {
    freopen("DAY5.INP", "r", stdin);
    freopen("DAY5.OUT", "w", stdout);
    int n, index = 0;
    ll a[limit], maxx = -1e9-1;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            if (maxx < a[i]) {
                maxx = a[i];
                index = i;
            }

        }

    }
    cout << index;
}
