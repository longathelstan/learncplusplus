#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    int n;
    ll a[limit], kq = LLONG_MAX;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    for (int i = 1; i < n; i++) {
        kq = min(kq, a[i] - a[i + 1]);
    }
    cout << kq;
}

