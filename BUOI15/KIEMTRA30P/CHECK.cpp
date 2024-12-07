#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("CHECK.INP", "r", stdin);

    int n;
    cin >> n;
    cin.ignore();
    vector<pair<double, int>> v;

    for (int i = 1; i <= n; i++) {
        int dem = 0;
        string line;
        getline(cin, line);

        stringstream ss(line);
        double num, sum = 0;

        while (ss >> num) {
            sum += num;
            dem++;
        }

        v.push_back(make_pair(sum, dem));
    }

    freopen("CHECK1.OUT", "w", stdout);
    for (const auto& p : v) {
        cout << p.first << endl;
    }

    freopen("CHECK2.OUT", "w", stdout);
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first > 20 || v[i].second > 10) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
