#include <bits/stdc++.h>
using namespace std;
const int limit = 1e4+1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n, x;
    cin >> n >> x;
    int a[limit];

    for (int j = 0; j < n; j++) cin >> a[j];
    sort(a, a + n);
    int *it = upper_bound(a, a + n, x);
    cout << *it;

    return 0;
}
