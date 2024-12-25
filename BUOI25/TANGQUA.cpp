#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    int n;
    ll a[limit];
    vector<ll> v;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        auto pos = lower_bound(a + 1, a + n + 1, a[i]);
        if (pos == a + n + 1) continue;
        else {
            v.push_back(*pos);
        }
    }
    cout << n - v.size();
}

