#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    string s;
    int cnt[300] = {0}, dem = 0;
    cin >> s;
    for (int r = 0; r < s.size(); r++) {
        cnt[s[r]]++;
        dem += cnt[s[r]];
    }
    cout << dem;
}
