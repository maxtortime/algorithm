#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int c = 1;
    int sum = 0;

    while (b != 0) {
        int temp = a * (b % 10);
        sum += temp * c;
        cout << temp << '\n';
        b /= 10;
        c *= 10;
    }

    cout << sum;
    return 0;
}