#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 1e6+8;
bool prime[limit];

bool isDX(int n) {
    int fcking = n;
    int tmp = 0;
    while(n != 0) {
        int digit = n % 10;
        tmp = tmp * 10 + digit;
        n /= 10;
    }
    if (tmp == fcking) return true;
    return false;
}

bool isPrime(int n) {
    if (n < limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void sang() {
    fill(prime, prime +limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
}

int main() {
    io;
    sang();
    int n;
    cin >> n;
    while (!isPrime(n) || !isDX(n)) {
        n++;
    }
    cout << n;
}
