#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("EOQ.INP", "r", stdin); freopen("EOQ.OUT", "w", stdout);
#define ll long long
using namespace std;

string check(ll n) {
    if (n % 2 == 1) return "?";
    if (n % 4 == 0) return "Even";
    else return "Odd";
}

int main() {
    io;
    file;
    ll n;
    cin >> n;
    cout << check(n);
}
