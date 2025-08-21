#include <bits/stdc++.h>
using namespace std;

int solve(string b, int m) {
    int res = 0;
    for (char c : b) {
        res = (res * 10 + (c - '0')) % m;
    }
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;

    int last_a = (a.back() - '0');

    vector<vector<int>> v = {
        {0},
        {1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6},
        {5},
        {6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1}
    };

    vector<int> vseq = v[last_a];
    int len = vseq.size();

    if (b == "0") {cout << 1;return 0;}

    int pos = solve(b, len);
    if (pos == 0) pos = len;

    cout << vseq[pos - 1];
}

