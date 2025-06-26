#include <bits/stdc++.h>
using namespace std;
/**
░░░░░ ▄▄▄░░▄██▄░░░
░░░░░▐▀█▀▌░░░░▀█▄░░░
░░░░░▐█▄█▌░░░░░░▀█▄░░
░░░░░░▀▄▀░░░▄▄▄▄▄▀▀░░
░░░░▄▄▄██▀▀▀▀░░░░░░░
░░░█▀▄▄▄█░▀▀░░
░░░▌░▄▄▄▐▌▀▀▀░░ This is Bob
▄░▐░░░▄▄░█░▀▀ ░░ Copy And Paste Him In
▀█▌░░░▄░▀█▀░▀ ░░ Every Coding Exercise,
░░░░░░░▄▄▐▌▄▄░░░ So He Can Explore
░░░░░░░▀███▀█░▄░░ Cause He Loves To Explore
░░░░░░▐▌▀▄▀▄▀▐▄░░
░░░░░░▐▀░░░░░░▐▌░░
░░░░░░█░░░░░░░░█░░░░░░░
░░░░░░█░░░░░░░░█░░░░░░░
░░░░░░█░░░░░░░░█░░░░░░░
░░░░▄██▄░░░░░▄██▄░░░░░

**/

bool laXDX(string s) {
    string result;
    for (int i = s.size() - 1; i >= 0; i--) {
        result.push_back(s[i]);
    }
    for (int i = 0; i < s.size(); i++) {
        if (result[i] != s[i]) return false;
    }
    return true;
}

int main() {
    int n, dem = 0;
    vector<int> v;
    cin >> n;
    string s;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (laXDX(s)) {
            dem++;
            v.push_back(i);
        }
    }

    cout << dem << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}
