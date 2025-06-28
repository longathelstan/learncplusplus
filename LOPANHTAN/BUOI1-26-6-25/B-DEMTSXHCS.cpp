#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int limit = 1e6+8;

int d[10] = {0};

void demchuso(int n) {
    if (n == 0) d[0]++;
    while (n != 0) {
        int digit = n % 10;
        d[digit]++;
        n /= 10;
    }
}

int main() {
    io;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        demchuso(x);
    }
    for (int i = 0; i <= 9; i++) cout << d[i] << " ";
}
