#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
//    freopen("PHATNHAC.INP", "r", stdin);
//    freopen("PHATNHAC.OUT", "w", stdout);
    int n;
    ll a[limit];
    map<ll, ll> freq;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int l = 1, dodai = 0;

    for (int r = 1; r <= n; r++) {
        freq[a[r]]++;
        while (freq[a[r]] > 1) {
            freq[a[l]]--;
            l++;
        }
        dodai = max(dodai, r - l + 1);
    }

    cout << dodai << endl;
}
