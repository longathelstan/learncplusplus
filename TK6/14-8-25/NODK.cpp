#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll l, r, k;
    cin >> l >> r >> k;
    ll templ = (l + k - 1) / k * k;
    ll tempr = r / k * k;
    ll temptongchiahetk = (templ + tempr) * ((tempr - templ) / k + 1) / 2;
    ll temptong = (l + r) * (r - l + 1) / 2;
    cout << temptong - temptongchiahetk;
}
