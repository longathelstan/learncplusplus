#include <bits/stdc++.h>
#define ll long long
#define file freopen("TSQU.INP", "r", stdin); freopen("TSQU.OUT", "w", stdout);
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e5+8;
vector<ll> v, a, b;
bool check(ll a) {
    ll tmp = sqrt(a);
    return tmp * tmp == a;
}

void xoa(vector<ll> v, ll x) {
  auto it = remove(v.begin(), v.end(), x);
  v.erase(it, v.end());
}

void xaydung() {
    v.push_back(0);
    v.push_back(1);
    for (ll i = 2; i <= limit; i++) {
        v.push_back(pow(i, 2));
    }
}

int main() {
    io;
    file;
    ll n, x, res = 0, dem = 1e9+8;
    xaydung();
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        if (check(x)) a.push_back(x);
        else b.push_back(x);
    }
    if (a.size() == b.size()) {cout << 0; return 0;}
    while (a.size() < b.size()) {
        dem = 1e9+8;
        ll nah;
        for (ll x : b) {
            auto t = lower_bound(v.begin(), v.end(), x);
            ll tmp = *t - x;
            if (dem > tmp) {
                dem = tmp;
                nah = x;
            }
        }
        a.push_back(nah);
        xoa(b, nah);
    }

    if (a.size() > b.size()) {
        dem = 0;
        for (ll x : a) {
            if (a.size() == b.size()) {cout << dem; return 0;}
            if (x == 0) dem+=2;
            else dem++;
            a.pop_back();
            b.push_back(x);
        }
    }

    cout << dem;
}
