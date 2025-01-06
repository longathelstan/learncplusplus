#include <bits/stdc++.h>
using namespace std;

const int limit = 1e9;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> dp(n + 1, limit);
    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        if (!dq.empty() && dq.front() < i - k) dq.pop_front();
        if (!dq.empty()) dp[i] = a[i] + dp[dq.front()];
        else dp[i] = a[i];
        while (!dq.empty() && dp[dq.back()] >= dp[i]) dq.pop_back();
        dq.push_back(i);
    }

    int kq = limit;
    for (int i = n - k + 1; i <= n; i++) {
        kq = min(kq, dp[i]);
    }

    cout << kq << endl;
    return 0;
}

