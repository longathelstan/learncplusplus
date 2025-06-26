#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    freopen("CHINHPHUONG.INP", "r", stdin);
    freopen("CHINHPHUONG.OUT", "w", stdout);
    ll x, y, dem = 0;
    cin >> x >> y;
    ll yso = sqrt(y);
    ll xso = sqrt(x-1);
    cout << yso - xso;
}
