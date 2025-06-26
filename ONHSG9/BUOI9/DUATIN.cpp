#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, tong = 0, tempai;
    int a[limit];
    cin >> n;
    for (int i = 1; i <= n - 1; i++) cin >> a[i];
    tong = a[1];
    tempai = a[1];
    for (int i = 2; i <= n - 1; i++) {
        if (tempai > a[i]) {
            tong += a[i];
            tempai = a[i];
        } else {
            tong += tempai;
        }
    }
    cout << tong;
}
