#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("THU.INP", "r", stdin);
    freopen("THU.OUT", "w", stdout);

    long long N;
    cin >> N;

    // Ngày 09/04/2024 là thứ 3, tương ứng với số 4
    int current_day = 4;

    // Tính thứ trong tuần sau N ngày
    int result = (current_day + N % 7 - 1) % 7 + 1;

    // Ghi kết quả ra file
    cout << result << endl;

    return 0;
}
