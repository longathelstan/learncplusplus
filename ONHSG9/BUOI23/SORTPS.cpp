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
    freopen("SORTPS.INP", "r", stdin);
    freopen("SORTPS.OUT", "w", stdout);
    int n;
    pair<int, int> c[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        c[i].first = x;
        c[i].second = y;
    }

    for (int i = 1; i <= n; i++) {
        awlontop(c[i].first, c[i].second);
    }
    sort(c + 1, c + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << c[i].first << " " << c[i].second << endl;
    }
}
