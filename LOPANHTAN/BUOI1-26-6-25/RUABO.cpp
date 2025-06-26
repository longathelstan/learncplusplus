#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n, q;
    unordered_map<int, int> mp;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mp[x]++;
    }
    cin >> q;
    while(q--) {
        int x; cin >> x;
        cout << mp[x] << "\n";
    }
}
