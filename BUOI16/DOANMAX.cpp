#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;

int main() {
    int n;
    ll a[limit], f[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (f[j] - f[i - 1] == 0) {
                cout << j - i + 1 << endl;
                for (int x = i; x <= j; x++) {
                    cout << a[i] << " ";
                }
                break;
            }
        }
    }
    cout << "NO";
}
