#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    set<ll> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }
    for (ll x : s) {
        cout << x << " ";
    }
}
