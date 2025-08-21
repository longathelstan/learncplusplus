#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    int n, t;
    string s;
    cin >> n >> s >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        bool ok = true;
        for (int i = a - 1, j = b - 1; i <= j; i++, j--) {
            if (s[i] != s[j]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
