#include <bits/stdc++.h>
using namespace std;

const int limit = 1e5+1;
bool prime[limit];

void sangNT() {
    for (int i = 0; i <= limit; i++) {
        prime[i] = true;
    }
    prime[0]=prime[1]=false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i ; j <= limit; j += i) prime[j] = false;
        }
    }
}

bool laSNT(long long n) {
    if (n < limit) return prime[n];
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    sangNT();
    long long a, b;
    cin >> a >> b;
    vector<int> v;
    for (int i = 2; i <= limit; i++) {
        if (prime[i]) v.push_back(i);
    }
    for (int j = a; j <= b; j++) {
        int i = 0;
        int tempj = j;
        cout << j << " = ";
        while (tempj != 0) {
            if (laSNT(tempj)) {
                cout << tempj<< endl;
                break;
            }
            if (tempj % v[i] == 0) {
                cout << v[i] << ".";
                tempj /= v[i];
            } else i++;
        }
        cout << endl;
    }
}
