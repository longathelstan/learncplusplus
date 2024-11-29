#include <bits/stdc++.h>
using namespace std;

const int limit = 1e6;

int main() {
    freopen("DCK.INP", "r", stdin);
    freopen("DCK.OUT", "w", stdout);
    int n, k;
    int a[limit], f[limit] = {0}, chiso = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (f[j] - f[i - 1] == k) {
                if (chiso <= j - (i - 1)) {
                    chiso = j - (i - 1);
                }
            }
        }
    }
    cout << chiso;
}
