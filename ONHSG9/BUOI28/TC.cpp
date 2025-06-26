#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("TC.INP", "r", stdin);
    freopen("TC.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    if (a % 2 != 0) a++;
    if (b % 2 != 0) b--;
    ll sosohang = (b - a) / 2 + 1;
    cout << (b + a) * sosohang / 2;
}
