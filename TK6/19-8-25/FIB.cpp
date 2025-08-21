#include <bits/stdc++.h>
#define ll long long
#define io ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
    io;
    long long X;
    cin >> X;

    vector<long long> fib = {1, 2};
    while (fib.back() <= X) {
        fib.push_back(fib[fib.size()-1] + fib[fib.size()-2]);
    }

    int dem = 0;
    long long remaining = X;


    for (int i = fib.size() - 1; i >= 0 && remaining > 0; i--) {
        if (fib[i] <= remaining) {
            remaining -= fib[i];
            dem++;
        }
    }

    cout << dem;
    return 0;
}

