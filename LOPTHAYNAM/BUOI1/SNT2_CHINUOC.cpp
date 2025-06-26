#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio; cin.tie(0);
using namespace std;

const int limit = 1e6+8;
bool prime[limit];
vector<int> v;

void sang() {
    fill(prime, prime + limit, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) for (int j = i * i; j <= limit; j += i) prime[j] = false;
    }
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
}

int main() {
    io;
    sang();
    int n, dem = 0;
    cin >> n;
    for (int x : v) {
        if (pow(x, 8) <= n) dem++;
        else break;
    }
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (pow(v[i], 2) * pow(v[j], 2) <= n) dem++;
            else break;
        }
    }
    cout << dem;
}
