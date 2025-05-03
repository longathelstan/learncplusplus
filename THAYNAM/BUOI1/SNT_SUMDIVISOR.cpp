#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e5+8;
bool prime[limit];
int d[limit] = {0};
vector<int> v;

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i])
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
    }
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
//    for (int x : v) cout << x << " ";
    for (int x : v) {
        for (int i = x * 2; i <= limit; i += x) d[i] += x;
    }
    for (int i = 1; i <= limit; i++) d[i] = d[i - 1] + d[i];
    for (int i = 1; i <= 20; i++) cout << d[i] << " ";
}

int main() {
    io;
    sang();
    int l, r;
    cin >> l >> r;
    cout << d[r] - d[l - 1];
}
