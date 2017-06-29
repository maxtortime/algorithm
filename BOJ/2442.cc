#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int N;
    int i,j,k;
    cin >> N;

    assert(N >=1 && N <=100);
    
    const int LINES = N;
    
    for (i = 0 ; i < LINES ; i++) {
        for (j = LINES-1 ; j > i ; j--)
            cout << " ";

        for (k = 0 ; k < i*2+1 ; k++)
            cout << "*";

        cout << "\n";
    }
}
