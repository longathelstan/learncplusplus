#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 5e6+8;
bool prime[limit];

void sang() {
    fill(prime, prime+limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < (limit); i++) {
        if (prime[i]) for (int j =  i * i; j < limit; j+=i) prime[j] = false;
    }
}

int main() {
    io;
    sang();
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) cout << i << " ";
    }
}
