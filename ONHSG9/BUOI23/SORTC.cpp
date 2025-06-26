#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
void awlontop(int &a, int &b) {
    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;
}
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first * b.second < b.first * a.second;
}
int main() {
    freopen("SORTC.INP", "r", stdin);
    freopen("SORTC.OUT", "w", stdout);
    int n, k;
    int a[limit], b[limit];
    pair<int, int> c[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        c[i].first = a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        c[i].second = b[i];
    }
    for (int i = 1; i <= n; i++) {
        awlontop(c[i].first, c[i].second);
    }
    sort(c + 1, c + n + 1, cmp);
    cout << c[k].first << " " << c[k].second;
}
