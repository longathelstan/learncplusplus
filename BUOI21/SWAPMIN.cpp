#include <bits/stdc++.h>
using namespace std;

int main() {
    bool hasPrinted = true;
    string n;
    multiset<char> ms;

    while (cin >> n) {
        for (char c : n) {
            ms.insert(c);
        }
        if (cin.peek() == '\n') break;
    }

    for (char c : ms) {
        if (c == '0' && hasPrinted) {
            continue;
        }
        hasPrinted = false;
        cout << c;
    }
    cout << endl;

    return 0;
}
