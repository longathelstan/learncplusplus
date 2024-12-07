#include <bits/stdc++.h>
using namespace std;

const int limit = 1e5 + 1;

bool prime[limit];

void sangNT() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

bool isPrime(long long n) {
    if (n <= limit) return prime[n];
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sochuso(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    sangNT();
    vector<long long> v;
    vector<long long> nn;
    int dem = 0;
    long long soghep = 0;

    for (int i = 2; i <= limit; i++) {
        if (prime[i]) {
            int dcmnn = sochuso(i);
            soghep = soghep * pow(10, dcmnn) + i;
            dem++;
        }
        if (dem == 2) {
            v.push_back(soghep);
            dem = 0;
            soghep = 0;
        }
    }

    int k;
    cin >> k;

    for (long long nigga : v) {
        if (isPrime(nigga)) {
            nn.push_back(nigga);
        }
    }

    cout << nn[k - 1] << endl;

    return 0;
}
