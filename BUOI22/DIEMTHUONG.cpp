#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 3e6+1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("DIEMTHUONG.INP", "r", stdin);
    freopen("DIEMTHUONG.OUT", "w", stdout);
    int n, m;
    ll dem = 0;
    ll a[limit], b[limit];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];

//    sort(a + 1, a + n + 1);
//    sort(b + 1, b + m + 1);

    int i = 1, j = 1;
    while (i <= n && j <= m) {
        if (a[i] > b[j]) {
            dem += (n - i + 1);
            j++;
        } else {
            i++;
        }
    }

    cout << dem;
}
