#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("FRIEND.INP", "r", stdin); freopen("FRIEND.OUT", "w", stdout);
using namespace std;

int main() {
    io;
    file;
    ll n, dem = 0;
    cin >> n;
    for (ll a = 1; a < n; a++) {
        for (ll b = 1; a * b < n; b++) {
            dem++;
        }
    }
    cout << dem;
}
