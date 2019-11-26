#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string res;
    if (A > B) res = ">";
    else if (A < B) res = "<";
    else res = "==";

    cout << res;
    return 0;
}