#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false);
using namespace std;
int n;
string s;

void sub1() {
    int dem = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((s[i] % 2 == 0 && s[j] % 2 != 0) || (s[i] % 2 != 0 && s[j] % 2 == 0)) dem++;
        }
    }
    cout << dem;
}

void sub2() {
    int demLe = 0, demChan = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] % 2 == 0) demChan++;
        else demLe++;
    }
    cout << demChan * demLe;
}

int main() {
    io;
    freopen("EOP.INP", "r", stdin);
    freopen("EOP.OUT", "w", stdout);
    cin >> n >> s;
    if (n <= 1e3) sub1();
    else sub2();
}


