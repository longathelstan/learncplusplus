#include <bits/stdc++.h>
using namespace std;

const int limit = 1e5+1;

int main() {
    int n;
    int a[limit], d[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        d[a[i]]++;
    }
    for (int i = 1; i <= limit; i++) {
        if (d[i] > 1) cout << i << " " << d[i] << endl;
    }
}
