#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 1e5+1;

int main() {
    int n;
    ll s;
    pair<ll, int> a[limit];
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    int i = 1, j = n;
    sort(a + 1, a + n + 1);
    for (int b = 1; b <= n; i++) {
        ll t = s - a[b].first;
        while (i < j) {
        if (a[i].first + a[j].first == t && i != b && j != b) {
            cout << a[b].second << " " << a[i].second << " " << a[j].second;
            return 0;
        } else {
            if (a[i].first + a[j].first < t) i++;
            else j--;
        }
        }
    }

    cout << "IMPOSSIBLE";
}
