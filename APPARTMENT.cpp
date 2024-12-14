#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int limit = 2e5+1;

int main() {
    int n, m, k, dem = 0;
    ll a[limit], b[limit];
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int j = 1; j <= m; j++) {
        cin >> b[j];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    int i = 1, j = 1;
    while (i <= n && j <= m) {
        if (a[i] - k <= b[j] && a[i] + k >= b[j]) {
            i++;
            j++;
            dem++;
        } else if (a[i] - k > b[j]) {
            j++;
        } else if (a[i] + k < b[j]){
            i++;
        }
    }
    cout << dem;
}
