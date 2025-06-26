#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 92;
ll f[limit];
void taoso(ll n) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= limit; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    ll n;
    vector<ll> v;
    cin >> n;
    taoso(n);
    cout << n << " = ";
    for (int i = limit; i >= 1; i--) {
        if (f[i] <= n) {
            v.push_back(f[i]);
            n -= f[i];
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << " + ";
    }
}
