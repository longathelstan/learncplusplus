#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("TOMAU.INP", "r", stdin);
    freopen("TOMAU.OUT", "w", stdout);
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int white_count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            white_count++;
        }
    }
    int kq = white_count;
    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') white_count--;
        if (s[i] == 'W') white_count++;

        kq = min(kq, white_count);
    }
    cout << kq << endl;
}
