#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+8;

int main() {
    int n, a[limit], d[limit] = {0}, maxx = INT_MIN, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        maxx = max(maxx, a[i]);
    }
    for (int i = 1; i <= maxx; i++) {
        if (d[i] > 1) dem += d[i] * (d[i] - 1) / 2;
    }
    cout << dem;
}
