#include <bits/stdc++.h>
#define io ios::sync_with_stdio(false); cin.tie(nullptr);
#define file freopen("SSUM.INP","r",stdin); freopen("SSUM.OUT","w",stdout);
#define ll long long
using namespace std;

string dit(const string &A, const string &B) {
    string a = A, b = B;
    if (a.size() < b.size()) swap(a, b);
    int tmp = 0, n = a.size(), m = b.size();
    string kq;
    for (int i = 0; i < m; i++) {
        int da = a[n-1-i] - '0';
        int db = b[m-1-i] - '0';
        int s = da + db + tmp;
        kq.push_back(char('0' + (s % 10)));
        tmp = s / 10;
    }
    for (int i = m; i < n; i++) {
        int da = a[n-1-i] - '0';
        int s = da + tmp;
        kq.push_back(char('0' + (s % 10)));
        tmp = s / 10;
    }
    if (tmp) kq.push_back(char('0' + tmp));
    reverse(kq.begin(), kq.end());
    return kq;
}

string mul(const string &A, int b) {
    if (b == 0) return "0";
    int tmp = 0, n = A.size();
    string kq;
    for (int i = 0; i < n; i++) {
        int da = A[n-1-i] - '0';
        ll prod = 1LL * da * b + tmp;
        kq.push_back(char('0' + (prod % 10)));
        tmp = prod / 10;
    }
    while (tmp) {
        kq.push_back(char('0' + (tmp % 10)));
        tmp /= 10;
    }
    reverse(kq.begin(), kq.end());
    return kq;
}

int main() {
    io;
    file;

    string s;
    cin >> s;
    int n = s.size();
    string dp = "0", ans = "0";
    for (int i = 0; i < n; i++) {
        int d = s[i] - '0';
        dp = mul(dp, 10);
        string addPart = mul(to_string(d), i + 1);
        dp = dit(dp, addPart);
        ans = dit(ans, dp);
    }
    cout << ans;
}
