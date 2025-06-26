#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("TRAMBOM.INP", "r", stdin);
    freopen("TRAMBOM.OUT", "w", stdout);
    long long n, k;
    cin >> n >> k;
    vector<long long> h(n);

    for (long long i = 0; i < n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    long long kq = 1e9+1;


    for (long long i = 0; i <= n - k; i++) {

        long long tg = h[i + k - 1] - h[i];
        kq = min(kq, tg);
    }

    cout << kq << endl;

    return 0;
}
