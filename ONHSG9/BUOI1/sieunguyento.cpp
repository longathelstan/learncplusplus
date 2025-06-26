#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e6+1;
bool prime[limit];

void sangNT() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

bool laSNT(ll n) {
    if (n <= limit) return prime[n];
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2==0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i+=6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool laSieuNT(int n) {
    if (!laSNT(n)) return false;
    ll tempn = n;
    while (tempn != 0) {
        if (laSNT(tempn) == false)
            return false;
        tempn /= 10;
    }
    return true;
}

int main() {
    sangNT();
    int n;
    cin >> n;
    ll socuoi = pow(10, n) - 1;
    ll sodau = pow(10, n - 1);
//    cout << socuoi << " " << sodau;
    for (ll i = sodau; i <= socuoi; i++) {
        if (laSieuNT(i)) {
            cout << i << endl;
        }
    }
}
