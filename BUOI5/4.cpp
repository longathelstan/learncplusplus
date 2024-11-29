#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ct1 = n*(n+1)*(n+2)/3;
    long long ct2 = n*(n+1)/2;
    cout << ct1 - ct2;
}
