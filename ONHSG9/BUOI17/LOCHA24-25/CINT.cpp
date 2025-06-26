#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll s = (b - a + 1) + (d - c + 1);
    ll dha = max(0LL, min(b, d) - max(a, c) + 1);

    s -= dha;

    cout << s << endl;
}
