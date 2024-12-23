#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+8;
bool prime[limit];

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

int main() {
    sang();
    int p, dem = 0;
    cin >> p;
    for (int i = p + 1; i <= 2 * p; i++) {
        if (prime[i]) {
            cout << i << " ";
            dem++;
        }
    }
    cout << endl;
    cout << dem;
}
