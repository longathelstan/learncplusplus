#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool ktsdx(ll n)
{
    ll nb = n, dn = 0;
    while (n > 0)
    {
        dn = dn * 10 + n % 10;
        n /= 10;
    }
    return nb == dn;
}
int dunt(ll n)
{
    int d = 0;
    if (n % 2 == 0)
    {
        d++;
        while (n % 2 == 0)
        {
            n /= 2;
        }
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0) {
            d++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 2)
    {
        d++;
    }
    return d;
}
bool sodep(ll n) {
    return ktsdx(n) && dunt(n) >= 3;
}

int main() {
    ll a, b, d = 0;
    cin >> a >> b;
    for (ll i = a; i <= b; i++) {
        if (sodep(i)) d++;
    }
    cout << d << endl;
    return 0;
}
