#include <bits/stdc++.h>
using namespace std;

const int limit = 1e6+1;
bool prime[limit];

void sangNT() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j+=i) prime[j] = false;
        }
    }
}

int main() {
    sangNT();
    vector<int> v;
    int k;
    cin >> k;
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (abs(v[i] - v[i+1]) >= k) {
            cout << v[i] << " " << v[i+1];
            break;
        }
    }
}
