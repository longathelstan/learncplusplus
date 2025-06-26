#include <bits/stdc++.h>
using namespace std;
const int limit = 1e4+1;

int main() {
    int n, s, a[limit], dem = 0;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        int k = s - a[i];
        if (binary_search(a, a + i + k, k)) dem++;
    }
    cout << dem;
}
