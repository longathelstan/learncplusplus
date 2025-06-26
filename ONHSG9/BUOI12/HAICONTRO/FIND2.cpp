#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long
int main() {
    freopen("FIND2.INP", "r", stdin);
    freopen("FIND2.OUT", "w", stdout);
    int n;
    ll x;
    ll a[limit];
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = n;
    sort(a + 1, a + n + 1);
    while (i < j) {
        if (a[i] + a[j] == x) {
            cout << a[i] << " " << a[j];
            return 0;
        } else {
            if (a[i] + a[j] < x) i++;
            else j--;
        }
    }
    cout << -1;
}
