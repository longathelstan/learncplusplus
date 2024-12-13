#include <bits/stdc++.h>
using namespace std;

const int limit = 1e6+1;
int boi[limit] = {0};

void sangboi() {
    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j += i) {
            boi[j]++;
        }
    }
}

int main() {
    freopen("COUNT.INP", "r", stdin);
    freopen("COUNT.OUT", "w", stdout);
    sangboi();
    int n, maxx = 0, a[limit];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        maxx = max(maxx, boi[a[i]]);
    }
    cout << maxx;
}
