#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;

struct awlong {
    int fi;
    int se;
};

int main() {
    int n;
    awlong a;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a.fi >> a.se;
    }
    sort(vec.begin(), vec.end(), [](const awlong& a, const awlong& b) {
        return a.fi < b.fi;
    });
}
