#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5+1;
bool prime[limit];
int uocnt[limit] = {0};

void sang() {
    for (int i = 0; i <= limit; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(limit); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= limit; j += i) prime[j] = false;
        }
    }
}

void hashawl() {
    for (int i = 2; i <= limit; i++) {
        int dem = 0;
        int temp = i;
        for (int j = 2; j <= sqrt(temp); j++) {
            if (prime[j] && temp % j == 0) {
                dem++;
                while (temp % j == 0) {
                    temp /= j;
                }
            }
        }
        if (temp > 1 && prime[temp]) {
            dem++;
        }
        uocnt[i] = dem;
    }
}

int main() {
    sang();
    hashawl();
    int a, b, tempdem = 0, tempindex = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (uocnt[i] >= tempdem) {
            tempdem = uocnt[i];
            tempindex = i;
        }
    }
    cout << tempindex << " " << tempdem;
}
