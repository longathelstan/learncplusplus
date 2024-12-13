#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
#define ll long long
ll a[limit], f[limit] = {0};

void sub2(int n) {
    ll d[limit] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
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

void sub1(int n) {
    map<int, ll> mp;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 1; i <= limit; i++) {
        f[i] = f[i - 1] + mp[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << f[a[i]] - mp[a[i]] << endl;
    }
}

int main() {
    int n;

    cin >> n;

    if (n >= 1e6) sub1(n);
    else sub1(n);
}
