#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;
int change_making(vector<int>, int);
const int MAX_MONEY = 10000;

int main() {
    int M; /* 거스러 줄 돈 */
    int C; /* 동전 종류의 개수 */
    cin >> C >> M;

    vector<int> D;

    for (int i = 0 ; i < C ; i++) {
        int coin;
        cin >> coin;
        D.push_back(coin);
    }

    sort(D.begin(), D.end());

    cout << change_making(D,M) << endl;
}

int change_making(vector<int> types, int money) {
    array<int, MAX_MONEY+1> counting = {0, };

    for (int coin : types) {
        if (coin > money) break;

        counting[coin]++;

        for (int j = 1 ; coin + j <= money ; j++) {
            if (counting[j] >= 0)
                counting[j + coin] += counting[j];
        }
    }

    return counting[money];
}

