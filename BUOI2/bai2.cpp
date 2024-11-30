#include <bits/stdc++.h>
using namespace std;

bool laSNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int testcase, n;
    cin >> testcase;
    int i = 1;
    while (i <= testcase) {
        cin >> n;
        bool noHave = true;
        for (int j = 2; j <= n; j++) {
            if (laSNT(j) && laSNT(n - j)) {
                cout << j << " " << n - j << endl;
                noHave = false;
                break;
            }
        }
        if (noHave == true) {
            cout << "khong" << endl;
        }
        i++;
    }
}
