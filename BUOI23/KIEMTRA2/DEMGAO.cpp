#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("DEMGAO.INP", "r", stdin);
    freopen("DEMGAO.OUT", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll a, b, k;
    cin >> a >> b >> k;
    cout << b / k - a / k;
}
