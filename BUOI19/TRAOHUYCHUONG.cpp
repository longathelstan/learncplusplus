#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, a[limit], d[limit] = {0};
    int vang = 0, bac = 0, dong = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        vang = max(vang, a[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (bac < a[i] && a[i] != vang) {
            bac = a[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dong < a[i] && a[i] != vang && a[i] != bac) {
            dong = a[i];
        }
    }
    cout << d[vang] << " " << d[bac] << " " << d[dong];
}
