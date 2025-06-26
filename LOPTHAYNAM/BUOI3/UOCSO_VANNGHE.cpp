#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll m, n;
    cin >> m >> n;
    ll t = __gcd(m, n);
    cout << "So to: " << t << endl;
    cout << "So nam moi to: " << m / t << endl;
    cout << "So nu moi to: " << n / t << endl;
}
