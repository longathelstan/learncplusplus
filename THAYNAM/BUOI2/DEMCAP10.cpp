#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> freq;
    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ans += freq[a[i] - k];
        ans += freq[a[i] + k];
        freq[a[i]]++;
    }

    cout << ans << '\n';
    return 0;
}
