#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5 + 1;

int main() {
    ll n, x;
    ll a[limit], kq = -1; // Khởi tạo kq là giá trị nhỏ nhất có thể

    // Nhập dữ liệu
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Sắp xếp mảng
    sort(a + 1, a + n + 1);

    // Duyệt qua từng phần tử trong mảng để tìm cặp có tổng lớn nhất mà không vượt quá x
    for (int i = 1; i < n; i++) {
        ll target = x - a[i];  // Cần tìm phần tử lớn nhất mà a[j] <= target = x - a[i]

        // Sử dụng tìm kiếm nhị phân để tìm phần tử lớn nhất không vượt quá target
        // `lower_bound(a + i + 1, a + n + 1, target + 1)` tìm vị trí đầu tiên mà phần tử > target
        auto it = lower_bound(a + i + 1, a + n + 1, target + 1);

        // Kiểm tra phần tử ngay trước vị trí đó
        if (it != a + i + 1) {
            --it; // Quay lại phần tử trước đó, vì lower_bound tìm thấy phần tử lớn hơn target
            kq = max(kq, a[i] + *it); // Cập nhật kq nếu tìm được tổng lớn hơn
        }
    }

    cout << kq << endl;  // In kết quả
    return 0;
}
