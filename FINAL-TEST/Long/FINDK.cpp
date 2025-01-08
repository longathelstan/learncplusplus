#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
void sub1() {
    ll i = 1;
    ll tong = 0, lastpos = 0;
    while (tong <= n) {
        tong += i;
        lastpos = i;
        i++;
    }
    cout << lastpos - 1;
}
int main() {
    freopen("FINDK.INP", "r", stdin);
    freopen("FINDK.OUT", "w", stdout);
    cin >> n;
    sub1();
}
