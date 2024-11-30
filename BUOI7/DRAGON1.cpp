#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("DRAGON1.INP", "r", stdin);
    freopen("DRAGON1.OUT", "w", stdout);
    int n, k;
    ll h[limit] = {0}, d[limit] = {0}, kq = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < k; i++) cin >> d[i];

    sort(h, h + n);
    sort(d, d + k);

    int i = 0, j = 0;
    while (j < k) {
        while (i < n && h[i] < d[j]) {
            i++;
        }
        if (i >= n) {
            cout << "No" << endl;
            return 0;
        }
        kq += h[i];
        i++;
        j++;
    }
    cout << kq << endl;
}
