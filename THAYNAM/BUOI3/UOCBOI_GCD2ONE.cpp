#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    int n, a[limit], le = 0, chan = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) chan++;
        else le++;
    }
    if (chan == 0 || le == 0) {
        cout << -1;
        return 0;
    }
    if (le < chan) {

    }
}
