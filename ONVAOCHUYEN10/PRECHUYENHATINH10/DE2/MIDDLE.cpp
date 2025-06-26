#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
#define file freopen("MIDDLE.INP", "r", stdin); freopen("MIDDLE.OUT", "w", stdout);
#define ll long long
using namespace std;

int main() {
    io;
    file;

    ll n, B;
    cin >> n >> B;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == B) { pos = i; break; }
    }
    if (pos < 0) {
        cout << 0;
        return 0;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        if      (a[i] > B) v[i] = +1;
        else if (a[i] < B) v[i] = -1;
        else               v[i] =  0;
    }
    unordered_map<ll,int> mp;
    ll sum = 0;
    mp[0] = 1;
    for (int i = pos - 1; i >= 0; i--) {
        sum += v[i];
        mp[sum]++;
    }
    ll ans = 0;
    sum = 0;
    for (int i = pos; i < n; i++) {
        sum += v[i];
        if (mp.count(-sum))
            ans += mp[-sum];
    }

    cout << ans;
}
