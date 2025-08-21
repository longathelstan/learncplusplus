#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const ll MOD = 1000000007;

ll fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    ll a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        ll tmp = (a + b) % MOD;
        a = b;
        b = tmp;
    }
    return b;
}

int main() {
    io;
    int n;
    cin >> n;
    cout << fibonacci(n);
}
