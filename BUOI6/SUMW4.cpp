#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, tong = 0;
    cin >> n;
    int j = 0;
    for (int i = 1; i <= n; i+=j) {
        j++;
        tong += i;
    }
    cout << tong;
}
