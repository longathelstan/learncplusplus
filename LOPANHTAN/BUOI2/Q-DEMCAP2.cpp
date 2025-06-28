#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e4+8;
int main() {
    io;
    int n, k, a[limit], dem = 0;

    // cach 1 dung map
    unordered_map<int, int> d;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        int tmp = k - a[i];
        for (int j = i + 1; j <= n; j++) {
            dem += d[tmp - a[j]];
        }
        d[a[i]]++;
    }
    cout << dem;

    //cach 2 dung mang dem thuong (phuong phap tinh tien)

    int d[limit];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        int tmp = k - a[i];
        for (int j = i + 1; j <= n; j++) {
            dem += d[tmp - a[j] + int(2e5)];
        }
        d[a[i] + (int)2e5]++;
    }
    cout << dem;
}

