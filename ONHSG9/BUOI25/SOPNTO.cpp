#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6 + 1;
bool prime[limit];
int awl[limit];

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < limit; i++) {
        if (prime[i]) {
            for (int j = i * i; j < limit; j += i) {
                prime[j] = false;
            }
        }
    }
}

void iuhanhcuc(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            awl[j]++;
        }
    }
}

int main() {
    sang();
    int n;
    cin >> n;

    iuhanhcuc(n);

    int dem = 0, result = 0;
    for (int i = 1; i <= n; i++) {
        if (awl[i] > dem) {
            dem = awl[i];
            result = i;
        }
    }

    cout << result << endl;
}
