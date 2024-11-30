#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, tong = 0;
    cin >> n;
    for (int i = 1; i <= n; i+=4) {
        tong += i;
    }
    cout << tong;
}
