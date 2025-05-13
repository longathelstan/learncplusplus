#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int N = 1e5 + 5;
int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int uc = a[1];
    for (int i = 2; i <= n; ++i) uc = __gcd(uc, a[i]);
    if (uc == 1) cout << 0;
    else cout << -1;
}

