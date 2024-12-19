#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("MERGE.INP", "r", stdin);
    freopen("MERGE.OUT", "w", stdout);
    int n, m;
    ll a[limit], b[limit];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    int i = 1, j = 1;
    while(i <= n && j <= m) {
        if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }
    while(i <= n) {
        cout << a[i] << " ";
        i++;
    }
    while(j <= m) {
        cout << b[j] << " ";
        j++;
    }
}
