#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e5+8;
int main() {
    io;
    int n, cnt[limit] = {0};
    cin >> n;

    for (int x = 1; x * x <= n; ++x) {
        for (int y = x; x * y <= n; ++y) {
            int prod = x * y;
            if (x == y) cnt[prod]++;
            else cnt[prod] += 2;
        }
    }

    long long res = 0;
    for (int a = 1; a * a <= n; ++a) {
        for (int b = a; a * b <= n - 1; ++b) {
            int ab = a * b;
            int remain = n - ab;
            if (a == b) res += cnt[remain];
            else res += 2LL * cnt[remain];
        }
    }

    cout << res;

}
