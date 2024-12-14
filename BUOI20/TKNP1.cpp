#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int awldeptrai(const ll a[limit], int n, ll x) {
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) return mid;
        else {
            if (a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}

int main() {
    freopen("TKNP1.INP", "r", stdin);
    freopen("TKNP1.OUT", "w", stdout);
    int n, q;
    ll a[limit], x;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    while(q--) {
        cin >> x;
        cout << awldeptrai(a, n, x) << endl;
    }
}
