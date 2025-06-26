#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6;
#define ll long long
int main() {
    freopen("GTLN.INP", "r", stdin);
    freopen("GTLN.OUT", "w", stdout);
    ll a, b, c, result = -1e9-1;
    cin >> a >> b >> c;
    if (a > result) result = a;
    if (b > result) result = b;
    if (c > result) result = c;
    cout << result;
}
