#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll tong = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        tong += s[i] - '0';  // Convert char to digit
    }

    cout << tong;
}
