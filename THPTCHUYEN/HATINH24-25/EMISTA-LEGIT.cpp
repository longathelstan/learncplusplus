#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k, x, y, sum = 0, maxx = 0;
    map<ll, ll> mp;
    map<ll, ll> f;
    cin >> n >> k;
    mp.insert({0, 0});
    for (ll i = 1; i <= n; i++) {
        cin >> x >> y;
        mp.insert({x, y});
    }
    for (auto x : mp) {
        sum += x.second;
        f.insert({x.first, sum});
    }
//    for (auto x : f) {
//        cout << x.first << " " << x.second << endl;
//        auto endd = f.upper_bound(x.first + k * 2);
//        if (endd == f.end()) {
//            endd = --f.end();
//        } else --endd;
//        maxx = max(maxx, (*endd).second - (--x).second);
//
//    }

    for (auto it = f.begin(); it != f.end(); ++it) {
//        cout << it->first << " " << it->second << endl;

        auto endd = f.upper_bound(it->first + k * 2);
        if (endd != f.begin()) --endd;
        else continue;

        ll x = (it == f.begin()) ? 0 : prev(it)->second;
        maxx = max(maxx, endd->second - x);
    }

    cout << maxx;
}


