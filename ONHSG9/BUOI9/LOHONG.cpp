#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int tong = 0;
    if (n == 0) tong += 1;
    while(n > 0) {
        int digit = n % 10;
        if (digit == 0 || digit == 4 || digit == 6 || digit == 9) {
            tong += 1;
        } else if (digit == 8) tong += 2;
        else tong += 0;
        n /= 10;
    }
    return tong;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);
}
