#include <iostream>
#include <algorithm>
using namespace std;

const int limit = 1e5 + 1;
#define ll long long

int main() {
    freopen("THOINEN.INP", "r", stdin);
    freopen("THOINEN.OUT", "w", stdout);
    int n;
    cin >> n;

    ll a[limit];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

        ll tempai = a[n];
        int dem = 0;

        for (int i = n; i >= 1; i--) {
            if (a[i] == tempai) {
                dem++;
            }
        }

        cout << dem;


    return 0;
}
