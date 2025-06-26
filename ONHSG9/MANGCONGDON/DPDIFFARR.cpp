#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
bool d[limit];
int awl[limit] = {0};

int main() {
    freopen("DPDIFFARR.INP", "r", stdin);
    freopen("DPDIFFARR.OUT", "w", stdout);
//    ios::sync_with_stdio(0);
//    cin.tie(0);
    for (int i = 0; i <= limit; i++) d[i] = false;
    int n, m, u, a[limit], dem = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = n; i >= 1; i--) {
        if (!d[a[i]]) {
            dem++;
            d[a[i]] = true;
        }
        awl[i] = dem;
    }
    while(m--) {
        cin >> u;
        cout << awl[u] << endl;
    }
}

