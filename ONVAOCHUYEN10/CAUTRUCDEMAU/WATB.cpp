#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, s = 0;
    cin >> n;
    if (n <= 10) {
        s = n * 7000;
    } else if (n > 10 && n <= 20) {
        s = 70000 + (n - 10) * 8000;
    } else if (n > 20 && n <= 30) {
        s = 70000 + 80000 + (n - 20) * 10000;
    } else if (n > 30) {
        s = 70000 + 80000 + 100000 + (n - 30) * 16000;
    }
    cout << s;
}
