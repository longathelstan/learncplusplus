#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int timkiemnhiphan(const int a[limit], int n, int x) {
    int l = 0;
    int r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        else {
            if (a[m] < x) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
    }
}


int main() {
    int n, x;
    cin >> n >> x;
    int a[limit];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << timkiemnhiphan(a, n, x);
}
