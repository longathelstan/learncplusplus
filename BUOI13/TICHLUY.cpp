#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int limit = 1e5 + 1;

int main() {
    ll n, x;
    ll a[limit], kq = -1; 
    
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i < n; i++) {
        ll target = x - a[i];  

        // `lower_bound(a + i + 1, a + n + 1, target + 1)` tìm vị trí đầu tiên mà phần tử > target
        auto it = lower_bound(a + i + 1, a + n + 1, target + 1);
        
        if (it != a + i + 1) {
            --it; 
            kq = max(kq, a[i] + *it); 
        }
    }

    cout << kq << endl; 
    return 0;
}
