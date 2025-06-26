#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("THN.INP", "r", stdin);
    freopen("THN.OUT", "w", stdout);
    ll n;
    cin >> n;
    queue<pair<string, ll>> q;
    q.push({"LE", 1});
    q.push({"HA", 1});
    q.push({"UYEN", 1});

    while (!q.empty()) {
        pair<string, ll> p = q.front();
        q.pop();

        if (n <= p.second) {
            cout << p.first;
            return 0;
        }
        n -= p.second;
        p.second *= 2;
        q.push(p);
    }
}
