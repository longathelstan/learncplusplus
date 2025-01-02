#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int limit = 1e6+1;
int boi[limit] = {0};

void sangboi() {
    for (int i = 1; i <= limit; i++) {
        for (int j = i; j <= limit; j += i) {
            boi[j]++;
        }
    }
}
int main() {
    sangboi();
    ll t, d;
//    cin >> t;
//    while(t--) {
        cin >> d;
        for (int i = 1; i <= limit; i++) {
            ll k = i + d;
            if (boi[k * i] >= 4) {
                cout << k * i << endl;
                break;
            }
        }
//    }
}
