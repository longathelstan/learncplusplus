#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int dem = 0;

    for (int i = k; i <= n; i++) {
        for (int j = 1; j <= i - k + 1; j++) {
            dem++;
        }
    }

    cout << dem ;
}
