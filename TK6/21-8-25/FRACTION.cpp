#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

struct Fraction {
    long long tu, mau;
};

bool behon(Fraction a, Fraction b) {
    return a.tu * b.mau < b.tu * a.mau;
}

int main() {
    io;
    int n, w;
    cin >> n >> w;
    vector<Fraction> f(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> f[i].tu >> f[i].mau;
    }
    vector<vector<int>> dp(n+1, vector<int>(2, 1));

    int ans = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (behon(f[j], f[i])) {
                dp[i][0] = max(dp[i][0], dp[j][0] + 1);
                dp[i][0] = max(dp[i][0], dp[j][1] + 1);
            }
            if (w == 1) {
                Fraction tmp = {f[i].mau, f[i].tu};

                if (behon(f[j], tmp)) {
                    dp[i][1] = max(dp[i][1], dp[j][0] + 1);
                }
            }
        }
        ans = max({ans, dp[i][0], dp[i][1]});
    }
    cout << ans;
}
