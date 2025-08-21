#include<bits/stdc++.h>
using namespace std;

string N , M;
int n , m;
bool Check;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MONEYHEIST.INP" , "r" , stdin);
    freopen("MONEYHEIST.OUT" , "w" , stdout);
    cin >> n >> m;
    cin >> N >> M;
    char tmp = M[m - 1];
    sort(M.begin() , M.end() , greater <char>());
    int L = 0;

    for (int i = 0 ; i < N.size() ; i++)
    {

        if(N[i] < M[L])
        {
            N[i] = M[L];
            L++;
        }
        if(tmp == N[i]) Check = true;
    }
    if(!Check) N[n - 1] = tmp;
    cout << N;
}

