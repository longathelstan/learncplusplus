#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    io;
    int n, d[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        d[x]++;
    }
    for (int i = 1; i <= limit; i++) {
        if (d[i] > 1) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
