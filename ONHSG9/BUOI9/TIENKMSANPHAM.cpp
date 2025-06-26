#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, x;
    cin >> n >> x;
    if (n <= 10) {
        if (n * x < 500) cout << n * x;
        else if (n * x >= 500 && n * x <= 1000) cout << n * x - 10*(n*x)/100;
        else if (n * x > 1000) cout << n * x - 20*(n*x)/100;
    } else {
        if (n * x < 500) cout << n * x - 5*(n * x) / 100;
        else if (n * x >= 500 && n * x <= 1000) cout << (n * x - 10*(n*x)/100) - 5 * (n * x - 10*(n*x)/100) / 100;
        else if (n * x > 1000) cout << (n * x - 20*(n*x)/100) - 5*(n * x - 20*(n*x)/100) / 100;
    }
}
