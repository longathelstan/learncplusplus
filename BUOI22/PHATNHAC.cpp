#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e6+1;

int main() {
    freopen("PHATNHAC.INP", "r", stdin);
    freopen("PHATNHAC.OUT", "w", stdout);
    int n;
    ll a[limit], d[limit] = {0}, f[limit] = {0};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }

    for (int i = 1; i <= n; i++) if (d[a[i]] > 1) f[i] = a[i];
    int freq[limit] = {0};
    int l = 1, dodai = 0;

    for (int r = 1; r <= n; r++) {
        freq[f[r]]++;

        while (freq[f[r]] > 1) {
            freq[f[l]]--;
            l++;
        }
        dodai = max(dodai, r - l + 1);
    }

    cout << dodai << endl;
}
