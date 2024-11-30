#include <bits/stdc++.h>
using namespace std;

const int limit = 1e6+1;
int a[limit];

void tinhsouoc() {
    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j+=i) {
            a[j]++;
        }
    }
}

int main() {
    freopen("SONHIEUUOCNHAT1.INP", "r", stdin);
    freopen("SONHIEUUOCNHAT1.OUT", "w", stdout);
    tinhsouoc();
    int n, result = 0;
    int c[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[c[i]] > result) {
            result = a[c[i]];
        }
    }
    cout << result;
}
