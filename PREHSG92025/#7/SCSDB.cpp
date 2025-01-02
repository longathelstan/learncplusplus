#include <bits/stdc++.h>
using namespace std;

bool chusokhacnhau(int n) {
    int dem = 0;
    set<int> s;
    while(n != 0) {
        int digit = n % 10;
        s.insert(digit);
        dem++;
        n /= 10;
    }
    if (dem == s.size()) return true;
    return false;
}

int main() {
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        if (chusokhacnhau(i)) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}
