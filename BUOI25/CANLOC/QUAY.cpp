#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, k;
    queue<ll> q;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        q.push(x);
    }
    for (int i = 1; i <= k; i++) {
        ll x = q.front();
        q.pop();
        q.push(x);
    }
    cout << q.front();
}
