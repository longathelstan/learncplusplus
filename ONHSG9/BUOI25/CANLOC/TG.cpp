#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, dem = 0;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ll s = a[i] + a[j];
            int k = lower_bound(a + 1, a + n + 1, s) - a;
            if (k == n + 1) break;
            if (k - 1 != i && k - 1 != j) dem++;
        }
    }
    cout << dem;
}
