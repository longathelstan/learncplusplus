#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+8;
int main() {
    freopen("DENMAU.INP", "r", stdin);
    freopen("DENMAU.OUT", "w", stdout);
    int n, m, kq = limit;
    int a[limit], d[limit] = {0};
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int j = 1;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (d[a[i]] == 0) dem++;
        d[a[i]]++;
        while (dem >= m) {
            kq = min(kq, i - j + 1);
            d[a[j]]--;
            if (d[a[j]] == 0) dem--;
            j++;
        }

    }
    cout << kq;
}
