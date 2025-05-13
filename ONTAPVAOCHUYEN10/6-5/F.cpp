#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int limit = 2e6 + 8;
bitset<limit> prime;

void sang() {
    prime.set();
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < limit; ++i) {
        if (prime[i]) {
            for (int j = i * i; j < limit; j += i)
                prime[j] = 0;
        }
    }
}

int main() {
    io;
    sang();
    int n;
    char k;
    cin >> n >> k;
    string s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    cin >> s;
    int maxx = INT_MIN, dem = 0;
    for (int i = 1; i <= n; ++i) {
        if (prime[i] && s[i - 1] == k) {
            if (a[i] > maxx) {
                maxx = a[i];
                dem = 1;
            } else if (a[i] == maxx) {
                ++dem;
            }
        }
    }

    if (dem == 0) cout << "0 0";
    else cout << dem << " " << maxx;
}
