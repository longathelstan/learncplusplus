//bro i'm so mad
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 2e3+1;

int main() {
    freopen("TONGC.INP", "r", stdin);
    freopen("TONGC.OUT", "w", stdout);
    int n, k, dem = 0;
    ll a[limit], f[limit] = {0};
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (f[j] - f[i - 1] == k) dem++;
        }
    }
    cout << dem;
}
