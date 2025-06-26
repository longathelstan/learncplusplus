#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, maxx = INT_MIN, minn= INT_MAX;
    int a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
    }
    for (int i = minn; i <= maxx; i++) {
        for (int i = 1; i <= n; i++) {
            if (i != a[i])
        }
    }
}
5
1 3 6 7 9
output
2 4 5 8
