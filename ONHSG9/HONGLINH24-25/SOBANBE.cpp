#include <bits/stdc++.h>
using namespace std;
const int limit = 1e5+1;
int tong[limit] = {0};

void sangtong() {
    for (int i = 1; i <= limit; i++) {
        for (int j = i * 2; j <= limit; j += i) {
            tong[j] += i;
        }
    }
}

int main() {
    sangtong();
    int l, r;
    cin >> l >> r;

    int dem = 0;
    for (int a = l; a <= r; a++) {
        int b = tong[a];
        if (b >= a && b <= r && tong[b] == a) dem++;
    }
    cout << dem;
}
