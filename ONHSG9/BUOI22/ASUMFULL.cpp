#include <bits/stdc++.h>
using namespace std;

int main(){
    sort(a, a + n + 1);
    long long dem = 0;
    j = 0;
    for (int i = 0;  i  <= n; i++) {
        while(j <= n && a[j] - a[i] <= k) j++;
        if (j > n) break;
        dem += (n-j+1);
    }
    cout << dem;
}
