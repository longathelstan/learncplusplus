#include <bits/stdc++.h>
using namespace std;
const int limit = 1e4+1;

int first_pos(const int a[], int n, int x) {
    int l = 0, r = n - 1;
    int pos = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) {
            pos = m;
            r = m - 1;
        }
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int last_pos(const int a[], int n, int x) {
    int l = 0, r = n - 1;
    int pos = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == x) {
            pos = m;
            l = m + 1;
        }
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[limit];

        for (int j = 0; j < n; j++) cin >> a[j];

        cout << first_pos(a, n, x) << endl;
    }

    return 0;
}
