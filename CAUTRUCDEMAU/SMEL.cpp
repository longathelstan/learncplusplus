#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long

void sub2(n, const int a[limit]) {
    ll d[limit] = {0}, f[limit] = {0};
    for (int i = 1; i <= n; i++) {
        d[a[i]]++;
    }
    for (int i = 1; i <= limit; i++) {
        f[i] = f[i - 1] + d[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << f[a[i]] - d[a[i]] << endl;
    }
}

void sub1(n, const int a[limit]) {
}

int main() {
    int n;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n >= 1e6) sub2(n, a);
}
