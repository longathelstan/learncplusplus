#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e3+1;

int main() {
    freopen("DCDN2.INP", "r", stdin);
    freopen("DCDN2.OUT", "w", stdout);
    int n, tempi, tempj;
    ll a[limit], f[limit] = {0}, mintong = 1e9+1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (mintong > f[j] - f[i - 1]) {
                mintong = f[j] - f[i - 1];
                tempi= i;
                tempj= j;
            }
        }
    }
    cout << mintong << endl;
    for (int i = tempi; i <= tempj; i++) {
        cout << a[i] << " ";
    }
}
