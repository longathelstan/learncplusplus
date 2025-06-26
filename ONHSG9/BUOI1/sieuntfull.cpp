#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isSuperPrime(int n) {
    // Kiểm tra tính siêu nguyên tố của số n bằng cách xóa dần các chữ số bên phải
    while (n > 0) {
        if (!isPrime(n)) return false;
        n /= 10;
    }
    return true;
}

vector<int> generateSuperPrimes(int n) {
    queue<int> q;
    vector<int> result;

    // Bắt đầu với các số nguyên tố 1 chữ số
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Nếu độ dài của số đạt n chữ số, kiểm tra tính siêu nguyên tố
        if (to_string(current).size() == n) {
            if (isSuperPrime(current)) result.push_back(current);
            continue;
        }

        // Mở rộng số hiện tại bằng cách thêm các chữ số lẻ vào cuối
        for (int digit : {1, 3, 7, 9}) {
            int nextNumber = current * 10 + digit;
            if (isPrime(nextNumber)) {
                q.push(nextNumber);
            }
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap so N: ";
    cin >> n;

    vector<int> superPrimes = generateSuperPrimes(n);

    cout << "Cac so sieu nguyen to co " << n << " chu so la:\n";
    for (int num : superPrimes) {
        cout << num << " ";
    }
    cout << "\nTat ca co " << superPrimes.size() << " so.\n";

    return 0;
}
