#include <bits/stdc++.h>
using namespace std;

const int limit = 1e6;

int main() {
    freopen("CSBN.INP", "r", stdin);
    freopen("CSBN.OUT", "w", stdout);
    int n, dem = 0, maxdoan = -1e6-1;
    int a[limit], mark[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mark[a[i]]++;
        maxdoan = max(maxdoan, a[i]);
    }
//    for (int i = 1; i <= maxdoan; i++) {
//        cout << mark[i] << " ";
//    }
//    cout << endl;
    for (int i = 1; i <= maxdoan; i++) {
        if (mark[i] > 1) {
            dem += mark[i] * (mark[i] - 1) / 2;
        }

    }
    cout << dem;
}
