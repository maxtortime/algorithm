#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int x, i;
    int s = 0;

    cin >> x;

    for (i = 0; i < 5000 ; i++) {
        s += i;
        if (x <= s) break;
    }

    int a = x - (s - i);
    int b = i + 1  - a;

    if (i % 2 == 0) cout << a << "/" << b;
    else cout << b << "/" << a;
    
    return 0;
}