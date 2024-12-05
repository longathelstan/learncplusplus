#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5 + 1;

bool binary_search1(const ll a[limit], int n, ll x) {
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            return true;
        } else {
            if (a[mid] > x) r = mid - 1;
            else l = mid + 1;
        }
    }
    return false;
}

int main() {
    freopen("findab.inp", "r", stdin);
    freopen("findab.out", "w", stdout);
    int n;
    ll a[limit], b[limit], dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        if(binary_search1(b, n, a[i])) dem++;
    }
    cout << dem;
}
