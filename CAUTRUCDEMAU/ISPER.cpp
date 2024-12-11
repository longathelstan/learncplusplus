#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    vector<int> v = {6, 28, 496, 8128, 33550336};

    ll n;
    cin >> n;

    int isper = -1;
    for (int x : v) {
        if (x < n) {
            isper = x;
        } else {
            break;
        }
    }

    cout << isper << endl;
}
