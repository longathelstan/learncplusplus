#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    ll n;
    cin >> n;
    if (n % 2 == 0) n--;
    cout << (1 + n) * ((n - 1) / 2 + 1) / 2;
}

