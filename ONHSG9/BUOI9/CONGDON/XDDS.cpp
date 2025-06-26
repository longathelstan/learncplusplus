#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
int main() {
    ll n;
    ll a[limit], f[limit] = {0};
    a[0] = INT_MIN;
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> a[i];

    }
    for (int i = n; i > 1; i--) {
        if (a[i] < a[i - 1]) f[i] = f[i - 1] + 1;
    }
    for (int i  = 1; i <=n ; i++) {
        cout << f[i] << " ";
    }
}
