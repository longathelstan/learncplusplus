#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    if (n % 7 == 0) cout << 4;
    if (n % 7 == 1) cout << 5;
    if (n % 7 == 2) cout << 6;
    if (n % 7 == 3) cout << 7;
    if (n % 7 == 4) cout << "CN";
    if (n % 7 == 6) cout << 3;
    if (n % 7 == 5) cout << 2;
}
