#include <bits/stdc++.h>
#define ll long long
using namespace std;

void countDivisorsInRange(ll a, ll b, vector<int>& divisors) {
    ll range_size = b - a + 1;
    divisors.assign(range_size, 0);

    for (ll i = 1; i * i <= b; i++) {
        for (ll j = max(i * i, (a + i - 1) / i * i); j <= b; j += i) {
            divisors[j - a]++;
            if (j / i != i) divisors[j - a]++;
        }
    }
}

int main() {
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b;
    cin >> a >> b;

    vector<int> divisors;
    countDivisorsInRange(a, b, divisors);

    ll maxDivisors = 0, bestNumber = a;
    for (ll i = 0; i < b - a + 1; i++) {
        if (divisors[i] > maxDivisors) {
            maxDivisors = divisors[i];
            bestNumber = a + i;
        }
    }

    cout << bestNumber << '\n';
    return 0;
}
