#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5 + 1;

int main() {
    freopen("FOURSUM.INP", "r", stdin);
    freopen("FOURSUM.OUT", "w", stdout);
    int n;
    ll s;
    pair<ll, int> a[limit];
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a + 1, a + n + 1);

    for(int c = 1; c <= n; c++) {
        ll tong = s - a[c].first;
        for (int b = 1; b <= n; b++) {
            if (c != b) {
                ll t = tong - a[b].first;
                int i = 1, j = n;
                while (i < j) {
                    if (i == b || i == c) {
                        i++;
                        continue;
                    }
                    if (j == b || j == c) {
                        j--;
                        continue;
                    }
                    if (a[i].first + a[j].first == t) {
                        cout << a[c].second << " " << a[b].second << " " << a[i].second << " " << a[j].second;
                        return 0;
                    } else if (a[i].first + a[j].first < t) {
                        i++;
                    } else j--;
               }
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}

