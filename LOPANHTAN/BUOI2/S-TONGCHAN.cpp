#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    io;
    int n, cntle = 0, cntchan = 0, tong = 0, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x % 2 == 0) cntchan++;
        else cntle++;
        tong += x;
    }

    if (tong % 2 == 0) {
        dem = (cntchan * (cntchan - 1) / 2) + (cntle * (cntle - 1) / 2);
    } else {
        dem = cnt[0] * cnt[1];
    }

    cout << dem;
}
