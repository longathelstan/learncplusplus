#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("GRAPE.INP", "r", stdin); freopen("GRAPE.OUT", "w", stdout);

int main() {
    io; file;
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    unordered_map<int, int> freq;
    int l = 1;
    int diff = 0;
    double res = 1e9;

for (int r = 1; r <= n; ++r) {
    unordered_map<int, int> freq;
    int diff = 0;

    for (int l = r; l >= 1; --l) {
        freq[a[l]]++;
        if (freq[a[l]] == 1) diff++;

        double tmp = 1.0 * diff / (r - l + 1);
        res = min(res, tmp);
    }
}


    cout << fixed << setprecision(4) << res;
}
