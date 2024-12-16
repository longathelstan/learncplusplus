#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int limit = 1e5+1;

int main() {
    int n;
    ll a[limit], b[limit], c[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    sort(c + 1, c + n + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; i++) {

        }
    }

}
