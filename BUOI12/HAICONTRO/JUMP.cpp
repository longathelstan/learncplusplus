#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+1;
int main() {
    freopen("JUMP.INP", "r", stdin);
    freopen("JUMP.OUT", "w", stdout);

    int n, dem = 0;
    ll a[limit], m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int i = 1, j = n;


    while (i <= j) {
        if (a[i] + a[j] <= m) {
            dem++;
            i++;
            j--;
        } else {
            dem++;
            j--;
        }
    }
    cout << dem;

}
