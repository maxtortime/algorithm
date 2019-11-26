#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // c-b 를 a 랑 나누고 +1 을 하면 되지 않을까
    int d = c-b;
    if (d <= 0) cout << -1;
    else cout << a / d + 1;
    return 0;
}