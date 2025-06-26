#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, tong = 0;
    cin >> n;
    if (n <= 1) tong = 10;
    else if (n > 1 && n <= 10) tong = 10 + (n - 1) * 9;
    else if (n > 10) tong = 10 + 72 + (n - 10) * 8;
    cout << tong << " nghindong";
}
