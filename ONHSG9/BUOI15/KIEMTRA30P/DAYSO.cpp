#include <bits/stdc++.h>
using namespace std;
const int limit = 1e3+1;
int main() {
    int n, a[limit], result[limit] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        result[i] = result[i - 1] + 1;
    }
}
