#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int main() {
    freopen("CACHNHIET.INP", "r", stdin);
    freopen("CACHNHIET.OUT", "w", stdout);
    int n, tong = 0, restong = 0, temp, kq = 0;
    int a[limit];
    vector<int> v;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        tong += a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    for(int i = 1; i <= n / 2; i++) {
        restong += max(0, a[i] - a[n - i + 1]);
    }
    kq = restong + tong;
    cout << kq;
}
