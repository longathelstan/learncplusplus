#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 2e6 + 8;
bool prime[limit];
int f[limit];
vector<int> v;

void sang() {
    fill(prime, prime + limit, true);
    fill(f, f + limit, 1);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (prime[i])
            for (int j = i * i; j <= limit; j += i)
                prime[j] = false;
    }
    for (int i = 2; i < limit; i++) {
        if (prime[i]) v.push_back(i);
    }
    for (int x : v) {
        for (int i = x; i < limit; i += x) f[i] *= x;
    }
    // for (int i = 1; i <= 20; i++) cout << f[i] << " ";
    // cout << "\n";
}

int main() {
    io;
    sang();
    int l, r;
    cin >> l >> r;
    unordered_map<int, int> d;
    for (int i = l; i <= r; i++) {
        d[f[i]]++;
    }

    int tong = 0;
    for (auto [i, freq] : d) {
        if (freq > 1) tong += freq * (freq - 1) / 2;
    }

    cout << tong;
}
