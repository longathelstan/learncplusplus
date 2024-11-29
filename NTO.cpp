#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6;
bool prime[limit];

void sangNT() {
    for (int i = 0; i <= limit; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i] == true) {
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
        }
    }
}

void sangN1() {
    for (int i = 0; i <= limit; i++) {
        prime[i] == true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i ; j <= limit; j += i) prime[j] = false;
        }
    }
}

int main() {
    freopen("NTO.INP", "r", stdin);
    freopen("NTO.OUT", "w", stdout);
    sangNT();
    int n, dem = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == true) dem++;
    }
    cout << dem;
}
