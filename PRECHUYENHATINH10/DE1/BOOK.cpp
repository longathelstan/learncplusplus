#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    io;
    freopen("BOOK.INP", "r", stdin);
    freopen("BOOK.OUT", "w", stdout);
    ll n, p;
    cin >> n >> p;
    ll tmpstart = p / 2;
    ll tmpend = n / 2 - p / 2;
    cout << min(tmpstart, tmpend);
}
