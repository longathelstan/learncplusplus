#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, sum = 0;
void sub1() {
    for (ll i = 1; i <= n; i += 2) sum += i;
    cout << sum;
}
void sub2() {
    if (n % 2 == 0) {
        ll ssh = (n - 2) / 2 + 1;
        cout << n * ssh / 2;
    } else {
        ll ssh = (n - 1) / 2 + 1;
        cout << (n + 1) * ssh / 2;
    }
}
int main() {
     cin >> n;
     if (n <= 1e6) sub1();
     else sub2();
}
