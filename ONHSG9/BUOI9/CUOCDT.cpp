#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    if (n < 50) cout << n * 1000;
    else if (n >= 50 && n <= 200) cout << 50000 + (n - 50) * 800;
    else if (n > 200) cout << 50000 + 120000 + (n - 200) * 600;
}
