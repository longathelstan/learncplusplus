#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long
// bro dont know this?
int main() {
    freopen("MEOAN.INP", "r", stdin);
    freopen("MEOAN.OUT", "w", stdout);
    int n;
    ll maxx = -1e9+1, tong = 0;
    vector<ll> v;
    while (cin >> n) {
        v.push_back(n);
        if (cin.peek() == '\n') break;
    }
    for (int i = 0; i < v.size(); i++) {
        maxx = max(v[i], maxx);
    }
    for (int i = 0; i < v.size(); i++) {
        tong += maxx - v[i];
    }
    cout << tong;
}

