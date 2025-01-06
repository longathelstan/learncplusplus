#include <bits/stdc++.h>
#define ll long long
using namespace std;
queue<ll> q;
int tachso(ll n) {
    while (n != 0) {
        int digit = n % 10;
        q.push(digit);
        n /= 10;
    }
}
int main() {
    ll n, dthwgke = 0;
    vector<ll> v;
    cin >> n;
    tachso(n);
    for (int i = 1; i <= q.size(); i++) {
        int hanhiuoii = q.front();
        q.pop();
    }
}
