#include <bits/stdc++.h>
#define ll long long
using namespace std;
int tachso(ll n) {
    return n % 100;
}
int main() {
    ll n;
    cin >> n;
    ll haanh = n*(n + 1)*(2*n + 1) / 6;
    cout << tachso(haanh);
}
