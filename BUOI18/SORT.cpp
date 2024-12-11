#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    vector<vector<int>> a(m);

    for (int i = 1; i <= n; ++i) {
        int du = i % m;
        a[du].push_back(i);
    }

    vector<int> kq;
    for (int i = 0; i < m; ++i) {
        kq.insert(kq.end(), a[i].begin(), a[i].end());
    }

    cout << kq[t-1] << endl;

    return 0;
}
