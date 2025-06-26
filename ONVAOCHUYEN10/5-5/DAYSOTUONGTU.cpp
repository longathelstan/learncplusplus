#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

vector<int> solve(const vector<int>& a) {
    unordered_map<int, int> mp;
    vector<int> v;
    int id = 0;
    for (int x : a) {
        if (!mp.count(x)) mp[x] = id++;
        v.push_back(mp[x]);
    }
    return v;
}

int main() {
    io;
    int n;
    cin >> n;
    if (n <= 1 || n > 5e4) {
        cout << -1;
        return 0;
    }
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    vector<int> ca = solve(a);
    vector<int> cb = solve(b);
    if (ca == cb) {
        cout << 1;
    } else cout << 0;
}
