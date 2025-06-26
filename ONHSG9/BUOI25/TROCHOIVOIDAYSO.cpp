#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    int n;
    ll a[limit], b[limit], minn = 1e9+1;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);

    int i = 1, j = n;
    while (i <= n && j >= 1) {
        ll sum = a[i] + a[j];
        minn = min(minn, abs(sum));
        if (sum > 0) j--;
        else i++;
    }
    cout << minn;
}
