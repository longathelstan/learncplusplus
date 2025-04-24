#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e6+8;
bool prime[limit];
vector<int> v;

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
}

int main() {
    io;
    sang();
    int n;
    cin >> n;
    auto i = upper_bound(v.begin(), v.end(), n);
    cout << *i;
}
