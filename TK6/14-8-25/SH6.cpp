#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a = 1, b = 1;
    while (b <= n) {
        ll temp = b;
        b = a + b;
        a = temp;
    }
    cout << a;
}
