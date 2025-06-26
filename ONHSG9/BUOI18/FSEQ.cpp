#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, a[limit], d[limit], maxx = INT_MIN, maxnum = INT_MIN, resi = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        maxx = max(maxx, a[i]);
    }
    for (int i = 0; i <= limit; i++) {
        if (maxnum < d[i]) {
            maxnum = d[i];
            resi = i;
        }
    }
    cout << maxx << endl;
    cout << resi << endl;
}
