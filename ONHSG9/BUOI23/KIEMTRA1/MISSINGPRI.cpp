#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+8;
bool prime[limit];
void sangNT() {
    fill(prime, prime+limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}
int main() {
    freopen("MISSINGPRI.INP", "r", stdin);
    freopen("MISSINGPRI.OUT", "w", stdout);
    sangNT();
    int n;
    int a[limit], d[limit] = {0}, maxx = -1e9-1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
        maxx = max(maxx, a[i]);
    }
    for (int i = 2; i <= maxx; i++) {
        if (prime[i] && d[i] == 0) {
            cout << i;
            return 0;
        }
    }
    cout << "No prime number missing!";
}
