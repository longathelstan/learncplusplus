#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
bool prime[limit];

void sangNT() {
    fill(prime, prime + limit + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
        }
    }
}

int main() {
    sangNT();
    int n;
    cin >> n;
    cout << "cau a:" << endl;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl << "cau b:" << endl;
    for (int i = n; i <= limit; i++) {
        if (prime[i]) {
            cout << i << endl;
            break;
        }
    }
    cout << "cau c:" << endl;
    for (int i = 3; i <= n; i++) {
        if (prime[i] && prime[i + 2]) cout << i << ", " << i + 2 << endl;
    }
}
