#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+8;
int main() {
    freopen("MAX3.INP", "r", stdin);
    freopen("MAX3.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    set<ll> s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() < 3) {
        cout << -1;
        return 0;
    }

    auto it = s.rbegin();
    advance(it, 2);

    cout << *it;

}
