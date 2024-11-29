#include <bits/stdc++.h>
using namespace std;
#define ll int
const int limit = 1e5+1;
ll solve(ll n) {
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem++;
            if (n / i != i) dem++;
        }
    }
    return dem;
}
int main() {
    freopen("SONHIEUUOCNHAT1.INP", "r", stdin);
    freopen("SONHIEUUOCNHAT1.OUT", "w", stdout);
    int n;
    int kq = 0, bro = 0;
    int a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int bruhh = solve(a[i]);
        if (kq < bruhh) {
            kq = bruhh;

        }
    }
    cout << kq;
}
