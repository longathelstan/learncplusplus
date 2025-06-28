/**
* Đếm số cặp al + ar = k (l < r) trong mãng A
**/
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n, k, dem = 0;
    unordered_map<int, int> d;
    cin >> n >> k;
    // cach 1 al = k - ar
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        dem += d[k - x];
        d[x]++;
    }
    cout << dem;
    // cach 2 ar = k - al
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        dem += d[x];
        d[k - x]++;
    }
}
