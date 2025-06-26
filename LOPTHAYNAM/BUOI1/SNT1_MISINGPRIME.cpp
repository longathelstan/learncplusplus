#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
const int limit = 1e6+8;
bool primes[limit];
void sang() {
    fill(primes, primes + limit, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (primes[i]) {
            for (int j = i * i; j <= limit; j+=i) primes[j] = false;
        }
    }
}

int main() {
    io;
    sang();
    int n, a[limit], d[limit] = {0}, minn = INT_MAX, maxx = INT_MIN;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (primes[a[i]]) d[a[i]]++;
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
//    for (int i = minn; i <= maxx; i++) cout << d[i] << " ";
    for (int i = minn; i <= maxx; i++) {
        if (primes[i] && d[i] == 0) {cout << i; return 0;}
    }
    cout << "No prime number missing!";
}
