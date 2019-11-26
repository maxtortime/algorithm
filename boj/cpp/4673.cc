#include <iostream>
using namespace std;

int d(int n) {
    int res = n;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    const int UPPER = 10000;

    int self_numbers[UPPER] = { 0 };
    for (int i = 1 ; i <= UPPER ; i++) {
        int t = d(i);
        if (t >= UPPER) continue;
        self_numbers[t-1] = 1;
    }

    for (int self_number = 1; self_number < UPPER; self_number++) {
        if (self_numbers[self_number-1] == 0) 
            cout << self_number << '\n';
    }

    return 0;
}