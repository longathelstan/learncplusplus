#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    int n;
    ll a[limit];
    ll chenhlech = LLONG_MAX;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++) {
        chenhlech = min(chenhlech, abs(a[i] - a[i + 1]));
    }
    cout << chenhlech;
}
