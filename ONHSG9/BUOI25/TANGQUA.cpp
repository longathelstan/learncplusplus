#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e5+1;
int main() {
    int n, dem = 0;
    ll a[limit];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i - 1] < a[i]) dem++;
    }
    cout << n - dem;
}

