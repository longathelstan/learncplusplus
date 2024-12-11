#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    vector<int> chan, le;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s % 2 == 0)
            chan.push_back(s);
        else
            le.push_back(s);
    }

    sort(chan.begin(), chan.end(), greater<int>());
    sort(le.begin(), le.end());

    int i = 0, j = 0;

    while (i < le.size() && j < chan.size()) {
        if (le[i] < chan[j]) {
            cout << le[i] << " ";
            i++;
        } else {
            cout << chan[j] << " ";
            j++;
        }
    }

    while (j < chan.size()) {
        cout << chan[j] << " ";
        j++;
    }

    while (i < le.size()) {
        cout << le[i] << " ";
        i++;
    }

    cout << endl;
    return 0;
}
