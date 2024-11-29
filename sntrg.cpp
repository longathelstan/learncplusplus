#include <bits/stdc++.h>
using namespace std;

bool laSNT(int n) {
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int sntrg(int n) {
    int kq = 0;
    for (int i = 2; i <= n; i++) {
        if (laSNT(i)) {
            if (n % i == 0) kq+=i;
        }
    }
    return kq;
}

int main() {
    int n, a, b, dem = 0;
    vector<int> v;
    cin >> n;
    int sntrgn = sntrg(n);
    cout << "so nguyen to rut gon cua n: " << sntrgn << endl;
    cout << "nhap a b" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sntrg(i) == sntrgn) {
            dem++;
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    cout << "cac so co cung nguyen to rut gon voi n:" << endl;
    for (int i = 0; i< v.size(); i++) cout << v[i] << " ";
    cout << endl;
    cout << "co " << dem << " so";

}
