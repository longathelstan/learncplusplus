#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e5+8;

bool primes[limit];
int d[limit];

int tongchuso(int n) {
    int tong = 0;
    while (n != 0) {
        int digit = n % 10;
        tong += digit;
        n /= 10;
    }
    return tong;
}

void solve() {
    fill(primes, primes + limit, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (primes[i]) for (int j = i * i; j <= limit; j += i) primes[j] = false;
    }
    fill(d, d + limit, false);
    for (int i = 2; i <= limit; i++) {
        if (primes[i]) {
            d[i] = tongchuso(i);
        }
    }
}

int main() {
    io;
    solve();
    int n, h, dem = 0;
    vector<int> v;
    cin >> n >> h;
    for (int i = 2; i <= n; i++) {
        if (primes[i] && d[i] == h) {
            dem++;
            v.push_back(i);
        }
    }
    cout << dem << "\n";
    for (int x : v) {
        cout << x << "\n";
    }
}
