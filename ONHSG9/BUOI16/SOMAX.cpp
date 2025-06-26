#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int maxx = INT_MIN, index;
    vector<int> v;
    cin >> s;
    int k = 5;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            v.push_back(s[i]);
        }
    }
    for (int i = 0; i < v.size() - k; i++) {
        if (maxx < v[i]) {
            maxx = v[i];
            index = i;
        }
    }
    for (int i = 0; i < index - 1; i++) {
        v.erase(v[i]);
    }
}
