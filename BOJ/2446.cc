#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int N;
    int i = 0, j=0, k=0;
    cin >> N;

    assert(N >=1 && N <=100);
    
    const int LINES = N*2-1;
    
    for (i = 0 ; i < LINES ; i++) {
        for (k = 0 ; k < (LINES-j) ; k++) {
            k < j ? cout << " " : cout << "*";
        }

        if (i < LINES/2) j++;
        else j--;

        cout << "\n";
    }
}
