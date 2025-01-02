#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("YNQ.INP", "r", stdin);
    freopen("YNQ.OUT", "w", stdout);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        multiset<long long> s;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }
        while (s.size() > 1) {
            auto it1 = s.begin();
            auto it2 = next(it1);

            long long sum = *it1 + *it2;
            s.erase(it1);
            s.erase(it2);
            s.insert(sum);
        }
        if (s.size() == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
