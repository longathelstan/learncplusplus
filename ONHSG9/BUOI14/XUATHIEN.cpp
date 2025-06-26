#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

int main() {
    int n, a[limit], d[limit] = {0}, maxx = 0, tempi;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (int i = 1; i <= limit; i++) {
        if (maxx < d[i]) {
            maxx = d[i];
            tempi = i;
        }
    }
    cout << tempi << endl << maxx;
}
