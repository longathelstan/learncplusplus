#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 92;
ll f[limit];
void taoso(ll n) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    taoso(n);
    cout << f[k];
}
