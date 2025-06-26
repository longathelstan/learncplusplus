#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, a[limit], d[limit] = {0}, maxx = 0, kq = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (int i = 0; i <= limit; i++) {
        if (d[i] > maxx) {
            maxx = d[i];
            kq = i;
        }
    }
    cout << kq;
}
