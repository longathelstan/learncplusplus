#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+1;
vector<ll> v;
ll tongchuso(ll n) {
    ll tong = 0;
    while (n != 0) {
        int digit = n % 10;
        tong += pow(digit, 2);
        n /= 10;
    }
    return tong;
}
bool laSNT(ll n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
void solve() {
    for (ll i = 1; i <= limit; i++) {
        ll x = tongchuso(i);
        if (laSNT(x)) v.push_back(i);
    }
}
int main() {
    solve();
    ll n;
    cin >> n;
    cout << *upper_bound(v.begin(), v.end(), n);
}
