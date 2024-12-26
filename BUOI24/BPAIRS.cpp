#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int tongchuso(ll n) {
    int tong = 0;
    while (n != 0) {
        int digit = n % 10;
        tong += digit;
        n /= 10;
    }
    return tong;
}
int main() {
    int n, dem = 0;
    ll a[limit];
    map<int, int> mp;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = tongchuso(a[i]);
        mp[a[i]]++;
    }
    for (auto x : mp) {
        int y = x.second;
//        cout << y << endl;
        dem += (y * (y - 1)/2);
    }
    cout << dem;
}
