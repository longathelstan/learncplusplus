#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    freopen("DAUDOAN.INP", "r", stdin);
    freopen("DAUDOAN.OUT", "w", stdout);
    int n, m, l, r;
    ll a[limit];
    int demko[limit] = {0}, demam[limit] = {0};
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0) demko[i] = demko[i - 1] + 1;
        else demko[i] = demko[i - 1];

        if (a[i] < 0) demam[i] = demam[i - 1] + 1;
        else demam[i] = demam[i - 1];
    }

    while(m--) {
        cin >> l >> r;
        if (demko[r] - demko[l - 1] > 0) cout << 0 << endl;
        else if (demam[r] - demam[l - 1] % 2 == 0) cout << '+' << endl;
        else cout << '-' << endl;
    }
}
