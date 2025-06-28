#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
