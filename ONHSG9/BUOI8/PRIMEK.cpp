#include <bits/stdc++.h>
using namespace std;
const int limit = 1e6+1;
#define ll long long
bool prime[limit];
void sangNT() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
        }
    }
}

int main() {
    sangNT();
    freopen("PRIMEK.INP", "r", stdin);
    freopen("PRIMEK.OUT", "w", stdout);
    int n, k, dem = 0;
    int a[limit];

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (prime[a[i]] && a[i] < k) dem++;
    }
    cout << dem;
}


