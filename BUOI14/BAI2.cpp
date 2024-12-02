#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e6+1;
vector<bool> prime(limit);

void sang() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j+= i) prime[j] = false;
        }
    }
}

bool laSNT(ll n) {
    if (n <= limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool laSDX(ll n) {
    ll dx = 0;
    ll temp = n;
    while (temp != 0) {
        ll digit = temp % 10;
        dx = dx * 10 + digit;
        temp /= 10;
    }
    if (dx == n) return true;
    return false;
}

bool is3UOCNT(ll n) {
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (laSNT(i)) {
                dem++;
            }
            if (n/i != i && laSNT(n/i)) dem++;
        }
    }
    if (dem >= 3) return true;
    return false;
}

int main() {
    sang();
    ll a, b;
    int dem = 0;
    cin >> a >> b;
    for (ll i = a; i <= b; i++) {
        if (laSDX(i) && is3UOCNT(i)) {
            dem++;
        }
    }
    cout << dem;
}
