#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;

int main() {
    int n;
    ll a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    ll maxx = max(a[n] * a[n - 1], a[1] * a[2]);
    cout << maxx;
}
