#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+8;
ll n, q, a[limit], d[limit] = {0};

// for n <= 1e5 && a[i] <= 1e9
void sub1() {
    sort(a + 1, a + n + 1);
    cin >> q;
    while(q--) {
        ll x;
        cin >> x;
        ll t1 = lower_bound(a + 1, a + n + 1, x) - a;
        cout << t1 - 1 << endl;
    }
}
// for n <= 1e6 && a[i] <= 1e6
void sub2() {
    for (int i = 1; i <= n; i++) d[a[i]]++;
    for (int i = 1; i <= limit; i++) d[i] += d[i - 1];
    cin >> q;
    while(q--) {
        ll x;
        cin >> x;
        cout << d[x - 1] << endl;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n <= 1e5) sub1();
    else sub2();
}
