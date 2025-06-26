#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Hàm tạo danh sách số nguyên tố bằng sàng Eratosthenes
vector<ll> sàngEratosthenes(ll limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<ll> primes;
    isPrime[0] = isPrime[1] = false; // 0 và 1 không phải số nguyên tố
    for (ll i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

// Hàm đếm số nguyên tố < n
ll countPrimes(ll n) {
    if (n <= 2) return 0;

    ll sqrt_n = sqrt(n);
    vector<ll> primes = sàngEratosthenes(sqrt_n); // Tìm các số nguyên tố ≤ sqrt(n)

    ll low = sqrt_n + 1;
    ll high = n - 1;
    ll count = primes.size(); // Đếm các số nguyên tố ≤ sqrt(n)

    // Chia đoạn [sqrt(n)+1, n-1] thành các đoạn nhỏ
    vector<bool> isPrime(high - low + 1, true);

    for (ll prime : primes) {
        // Bắt đầu từ bội số đầu tiên của prime trong đoạn [low, high]
        ll start = max(prime * prime, (low + prime - 1) / prime * prime);

        for (ll j = start; j <= high; j += prime) {
            isPrime[j - low] = false;
        }
    }

    // Đếm các số nguyên tố trong đoạn [low, high]
    for (ll i = 0; i < isPrime.size(); i++) {
        if (isPrime[i]) count++;
    }

    return count;
}

int main() {
    ll n;
    cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}
