#include <iostream>
#include <algorithm>
#include <array>
#include <functional>

typedef unsigned int uint;
long long change_making(int*, int, int);
using namespace std;

int main() {
    int M; /* 거스러 줄 돈 */
    int C; /* 동전 종류의 개수 */

    int *D; // 각 동전에 해당하는 돈 

    cin >> C >> M;
    D = new int[C];

    for (int i = 0 ; i < C ; cin >> D[i++]) ;

    sort(D, D + C,[](int a, int b) {
        return a < b;
            });

    cout << change_making(D,M,C) << endl;

    delete D;
}

long long change_making(int* types, int money, int size) {
    const int MAX_COIN = 100;
    const long long MAX_COUNT = 2147483648;
    array<long long, MAX_COIN+1> counting;

    counting.fill({0});

    for (int i = 0 ; i < size ; i++) {
        int coin = types[i];
        
        if (coin > money) break;

        counting[coin]++;

        for (int j = 1 ; coin + j <= money ; j++) {
            if (counting[j] >= 0)
                counting[j + coin] += counting[j];
        }
    }

    long long n = counting[money];

    if (n > MAX_COUNT)
        return n % MAX_COUNT;
    else
        return n;
}

