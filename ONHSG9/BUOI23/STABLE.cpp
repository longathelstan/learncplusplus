#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5 + 1;

int main() {
    freopen("STABLE.INP", "r", stdin);
    freopen("STABLE.OUT", "w", stdout);
    int n = 0;
    pair<ll, int> a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1, [](const pair<ll, int>& a, const pair<ll, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    });
    for (int i = 1; i <= n; i++) {
        cout << a[i].second << " ";
    }
}
