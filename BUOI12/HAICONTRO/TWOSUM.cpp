#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;

int main() {
    freopen("TWOSUM.INP", "r", stdin);
    freopen("TWOSUM.OUT", "w", stdout);
    int n;
    ll s;
    pair<ll, int> a[limit];
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    int i = 1, j = n;
    sort(a + 1, a + n + 1);
    while (i < j) {
        if (a[i].first + a[j].first == s) {
            cout << a[i].second << " " << a[j].second;
            return 0;
        } else {
            if (a[i].first + a[j].first < s) i++;
            else j--;
        }
    }
    cout << "IMPOSSIBLE";
}
