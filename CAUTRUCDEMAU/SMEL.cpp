#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long

int main() {
    int n;
    ll a[limit], d[limit] = {0}, f[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (int i = 1; i <= limit; i++) {
        f[i] = f[i - 1] + d[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << f[a[i]] - d[a[i]] << endl;
    }
}
