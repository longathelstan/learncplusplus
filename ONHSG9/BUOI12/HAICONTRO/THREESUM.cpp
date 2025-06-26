#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5 + 1;

int main() {
    freopen("THREESUM.INP", "r", stdin);
    freopen("THREESUM.OUT", "w", stdout);
    int n;
    ll s;
    pair<ll, int> a[limit];
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a + 1, a + n + 1);

    for (int b = 1; b <= n; b++) {
        ll t = s - a[b].first;
        int i = 1, j = n;

        while (i < j) {
            if (i == b) {
                i++;
                continue;
            }
            if (j == b) {
                j--;
                continue;
            }
            if (a[i].first + a[j].first == t) {
                cout << a[b].second << " " << a[i].second << " " << a[j].second;
                return 0;
            } else if (a[i].first + a[j].first < t) {
                i++;
            } else {
                j--;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
