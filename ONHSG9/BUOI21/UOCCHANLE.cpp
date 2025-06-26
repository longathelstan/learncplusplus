#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int root = sqrt(n);
        if (root * root == n) cout << "LE" << endl;
        else cout << "CHAN" << endl;
    }
    return 0;
}
