#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int binary_search(const int a[limit], int n, int x) {
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return true;
        else {
            if (a[mid] < x) l = mid + 1;
            else r = mid - 1;
        }
    }
}

int main() {
    int t, n, x;
    int a[limit];

    cin >> t;
    while(t--) {
        cin >> n >> x;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int *posx = lower_bound(a + 1, a + n + 1, x);
        int *posy = upper_bound(a + 1, a + n + 1, x);
        cout << posy - posx << endl;
    }
}
