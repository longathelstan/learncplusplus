#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;

int bs(const ll a[limit], int n, ll s) {
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == s) return mid;
        else {
            if (s > a[mid]) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}

int main() {
    freopen("EQN.INP", "r", stdin);
    freopen("EQN.OUT", "w", stdout);
    int n, dem = 0;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                ll s = a[i] + a[j];
                int t = bs(a, n, s);
                if (t != i && t != j && t != -1) dem++;
            }
        }
    }
    cout << dem;
}
