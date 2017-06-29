#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int N;
    cin >> N;
    assert(N>=1 && N<=9);

    for (int i = 1 ; i <= 9 ; i++)
        cout << N << " * " << i << " = " << i * N << "\n";
}
