#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("NOTDIV13.INP", "r", stdin); freopen("NOTDIV13.OUT", "w", stdout);
using namespace std;

int main() {
    io;
    file;
    ll l, r;
    cin >> l >> r;
    ll tong = (l + r) * ((r - l) + 1) / 2;
    ll maxboi13 = r / 13 * 13;
    ll minboi13 = (l + 13 - 1) / 13 * 13;

    ll tongchiahet13 = (minboi13 + maxboi13) * ((maxboi13 - minboi13) / 13 + 1) / 2;
    cout << tong - tongchiahet13;
}
