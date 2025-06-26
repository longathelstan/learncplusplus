#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("OVERWIN.INP", "r", stdin);
//    freopen("OVERWIN.OUT", "w", stdout);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int, int> d;
        bool tim = false;
        for (int i = 0; i < n; i++) {
            d[a[i]]++;
            if (i >= k) {
                d[a[i - k]]--;
                if (d[a[i - k]] == 0) d.erase(a[i - k]);
            }
            if (d[a[i]] > 1) {
                tim = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!tim) cout << "NO" << endl;
    }
}
