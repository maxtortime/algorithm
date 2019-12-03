#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // Writing your code...
    int L, P;
    int counts[5] = {};
    cin >> L >> P;

    int count = L * P;
    
    for (int i = 0; i < 5; ++i) {
        cin >> counts[i];
        counts[i] = counts[i] - count;
    }

    for (int i = 0; i < 5; i++) {
        string end = i == 4 ? "\n" : " ";
        cout << counts[i] << end;
    }

    return 0;
}