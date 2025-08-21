#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 2e5 + 5;
const int INF = 1e18;

struct Firefly {
    int dist, c;
} a[N];

pair<int, int> b[N];

int n, m, u, v;

bool cmp(Firefly a, Firefly b) {
    return a.dist < b.dist;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> u >> v;
    for (int i = 1; i <= n; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        int dx = x - u, dy = y - v;
        a[i] = {dx * dx + dy * dy, c};
    }

    sort(a + 1, a + n + 1, cmp);

    b[0] = {0, -1};
    for (int i = 1; i <= n; i++) {
        b[i].first = a[i].dist;
        b[i].second = max(b[i - 1].second, a[i].c);
    }

    while (m--) {
        int l;
        cin >> l;
        int val = l * l;
        int pos = upper_bound(b + 1, b + n + 1, make_pair(val, INF)) - b - 1;
        cout << b[pos].second << '\n';
    }
}

