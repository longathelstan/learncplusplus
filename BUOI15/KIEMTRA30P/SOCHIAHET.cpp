#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e3+1;

bool laSOCHHT(ll n) {
    ll temp = n;

    while (temp != 0) {
        ll digit = temp % 10;
        if (digit == 0 || n % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

int main() {
    int n, dem = 0;
    ll a[limit];
    vector<ll> v;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (laSOCHHT(a[i])) {
            dem++;
            v.push_back(a[i]);
        }
    }
    cout << dem << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
