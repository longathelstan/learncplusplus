#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int t = __gcd(a, b);
    cout << a * b / t << endl;
    cout << "An: " << b / t << endl;
    cout << "Bach: " << a / t;
}
