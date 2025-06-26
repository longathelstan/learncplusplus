#include <bits/stdc++.h>
using namespace std;

// Mang cac so nguy�n to nho dung de sinh so
int primesArray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
vector<int> primes(primesArray, primesArray + sizeof(primesArray) / sizeof(int));


// Bien toan cuc de luu so phan nguyen to tot nhat
int bestNumber = 1;
int maxDivisors = 0;

// Ham quay lui sinh so phan nguyen to
void backtrack(int index, long long current, int divisors, int K) {
    // Cap nhat ket qua neu tim thay so co nhieu uoc hon
    if (divisors > maxDivisors || (divisors == maxDivisors && current < bestNumber)) {
        maxDivisors = divisors;
        bestNumber = current;
    }

    // Neu da dung het cac so nguyen to hoac so vuot qua K, dung
    if (index >= primes.size() || current > K) {
        return;
    }

    long long prime = primes[index];
    long long temp = current;
    int power = 1;

    // Thu tang luy thua cua so nguy�n to hien tai
    while (temp * prime <= K) {
        temp *= prime;
        power++;
        backtrack(index + 1, temp, divisors * (power + 1), K);
    }
}

int main() {

//    freopen("SOPNTO.INP", "r", stdin);
//    freopen("SOPNTO.OUT", "w", stdout);

    int K;
    cin >> K;

    // Goi ham backtrack de tim so phan nguyen to
    backtrack(0, 1, 1, K);


    cout << bestNumber << endl;

    return 0;
}


