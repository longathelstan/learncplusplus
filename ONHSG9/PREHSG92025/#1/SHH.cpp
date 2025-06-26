#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tongchuso(double n) {
    stringstream ss;
    ss << fixed << setprecision(10) << n;
    string awl = ss.str();
    int tong = 0;
    for (char c : awl) {
        if (isdigit(c)) tong += c - '0';
    }
    return tong;
}

int main() {
    freopen("SHH.INP", "r", stdin);
    freopen("SHH.OUT", "w", stdout);
    double a;
    cin >> a;
    cout << tongchuso(a * a / 2);
}
