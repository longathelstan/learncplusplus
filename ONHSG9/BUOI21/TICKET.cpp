#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, m;
    multiset<ll> ms;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    for (int i = 1; i <= m; i++) {
        ll t;
        cin >> t;
        auto temp = ms.upper_bound(t);
        if (temp == ms.begin()) {
            cout << -1 << endl;
            break;
        }
        --temp;
        cout << *temp << endl;
        ms.erase(temp);
    }
}
