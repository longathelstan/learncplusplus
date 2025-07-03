#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const int N = 5e6 + 5;
int n;
int a[N];
int cnt[N];
int cnt_2[N];

int main() {
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    /// 2 * a[k] = a[i] + a[j];
    int ans = 0;
    if (n <= 3000)
    {
        for(int i = 1 ; i <= n ; i++)
            for(int j = i + 1 ; j <= n ; j++)
                cnt[a[i] + a[j]]++;

        for(int k = 1 ; k <= n ; k++)
            if(cnt[2 * a[k]] > 0)
                ans++;
        cout << ans;
    }
    else {
        for (int i = 1; i <= n; i++) {
            cnt_2[a[i]]++;
        }
        for (int i = 1; i <= 5000; i++) {
            for (int j = 1; j <= 5000; j++) {

            }
        }
    }

}
