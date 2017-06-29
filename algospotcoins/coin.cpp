/*
   문제

   우리 나라에는 10원, 50원, 100원, 500원의 네 가지 동전이 있다. (1원짜리와 5원짜리는 거의 안 쓰니까 없는 걸로 하지요) 이 동전들을 이용해 110원을 거슬러 주는 방법은 몇 가지나 될까? 다음의 네 가지가 있다:

   10원 짜리 11개
   10원짜리 6개, 50원짜리 1개
   10원짜리 1개, 50원짜리 2개
   10원짜리 1개, 100원짜리 1개
   금액이 커지거나 동전의 종류가 많아질 수록 이 경우의 수는 많아진다. 동전의 종류와 금액이 주어질 때, 해당 동전들을 이용해 해당 금액을 환전하는 방법의 수를 구하는 프로그램을 작성하라.

   입력

   입력의 첫 줄에는 테스트 케이스의 수 T (1 <= T <= 100) 가 주어진다. 각 테스트 케이스의 첫 줄에는 환전할 금액 M (1 <= M <= 5000) 과 동전 종류의 개수 C (1 <= C <= 100) 가 주어진다. 그 다음 줄에, C 개의 정수로 각 동전 종류별 금액이 주어진다. 동전의 금액은 5000 이하의 자연수이다.

   출력

   각 테스트 케이스마다, 해당 금액을 환전할 수 있는 경우의 수를 출력한다. 경우의 수가 1000000007 보다 큰 경우, 1000000007 으로 나눈 나머지를 출력한다.

   예제 입력

   4
   110 4
   10 50 100 500
   850 4
   10 50 100 500
   3600 5
   100 300 500 900 2000
   1278 8
   1 2 4 8 16 32 64 128

   예제 출력

   4
   110
   130
   873794561
   */

#include <iostream>
#include <algorithm>
#include <array>
#include <functional>

typedef unsigned int uint;
long long change_making(int*, int, int);
using namespace std;

int main() {
    int T; /* 테스트 케이스의 수 */
    int *M; /* 거스러 줄 돈 */
    int *C; /* 동전 종류의 개수 */

    int **D; // 각 동전에 해당하는 돈 

    cin >> T;
    D = new int*[T];
    M = new int[T];
    C = new int[T];

    for (int i = 0 ; i < T ; i++) {
        cin >> M[i] >> C[i];
        D[i] = new int[C[i]];

        for (int j = 0 ; j < C[i] ; cin >> D[i][j++]) ;

        sort(D[i], D[i] + C[i],[](int a, int b) {
                return a < b;
                });
    
        cout << change_making(D[i],M[i],C[i]) << endl;
    }

    delete D; delete M; delete C;
}

long long change_making(int* types, int money, int size) {
    const int MAX_COIN = 5000;
    const long long MAX_COUNT = 1000000007;
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

