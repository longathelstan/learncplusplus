#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, k, restong = 0;
    int a[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int tong = 0;
    int j = 1;
    for (int i = 1; i <= n; i++) {
        tong += a[i];
        while (tong >= k) {
            tong -= a[j];
            j++;
        }
        restong = max(restong, tong);
    }
    cout << restong;
}
