#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, dem = 0;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int kq = 0, previouskq = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            previouskq++;
        } else {
            kq = max(kq, previouskq);
            previouskq = 1;
        }
    }
    kq = max(kq, previouskq);
    cout << kq;
}
