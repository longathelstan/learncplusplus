#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

const int limit = 1e7+3;
int f[limit] = {0};
bool prime[limit];

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
}

void PTTSNT() {
    for (int i = 2; i < limit; i++) {
        if (prime[i]) {
            f[i] = f[i - 1];
            continue;
        }
        int tmp = i, sum = 0;
        for (int j = 2; j * j <= tmp; j++) {
            while (tmp % j == 0) {
                sum += j;
                tmp /= j;
            }
        }
        if (tmp > 1) sum += tmp;
        f[i] = f[i - 1] + sum;
    }
}


int main() {
    io;
    sang();
    PTTSNT();
    int l, r;
    cin >> l >> r;
    cout << f[r] - f[l - 1];
}
