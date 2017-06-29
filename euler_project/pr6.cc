#include <iostream>
using namespace std;
// (sum i)^2 - (sum i^2)= n*(n+1)*(n*3+2)*(n-1)/12

int pr6(int n) {
    return n*(n+1)*(n*3+2)*(n-1)/12;
}
int main() {
    cout << pr6(100) << '\n';
}

