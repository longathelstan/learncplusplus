#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> tail;

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(tail.begin(), tail.end(), a[i]);

        if (it == tail.end()) {
            tail.push_back(a[i]);
        } else {
            *it = a[i];
        }
    }

    cout << tail.size() << endl;

    return 0;
}

