#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 2e6+8;
int boi[limit];

void sangboi() {
    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j += i) {
            boi[j]++;
        }
    }
}

int main() {
    io;
    sangboi();
    int n, k, dem = 0;
    cin >> n >> k;
    for (int i = 2; i <= n; i++) {
        if (boi[i] == k) dem++;
    }
    cout << dem;
}
