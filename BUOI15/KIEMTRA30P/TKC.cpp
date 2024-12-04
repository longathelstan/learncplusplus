#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX_N = 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Đọc dữ liệu
    int n;
    cin >> n;
    vector<ll> a(n), result(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Các biến để tính toán tổng khoảng cách
    ll prefix_sum = 0; // Tổng các giá trị của a[1], a[2], ..., a[i-1]
    ll total_sum = 0;  // Tổng khoảng cách từ a[i] tới các điểm trước đó

    // Tính tổng khoảng cách cho các điểm i
    for (int i = 0; i < n; ++i) {
        result[i] += a[i] * i - prefix_sum; // Tổng khoảng cách từ a[i] đến các điểm phía trước
        prefix_sum += a[i]; // Cập nhật tổng của các điểm đã duyệt
    }

    // Tính tổng khoảng cách từ các điểm phía sau
    ll suffix_sum = 0; // Tổng các giá trị của a[i+1], a[i+2], ..., a[n]
    for (int i = n - 1; i >= 0; --i) {
        result[i] += suffix_sum - a[i] * (n - i - 1); // Tổng khoảng cách từ a[i] đến các điểm phía sau
        suffix_sum += a[i]; // Cập nhật tổng các giá trị phía sau
    }

    // In kết quả
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

