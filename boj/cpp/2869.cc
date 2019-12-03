#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b,v;

    cin >> a >> b >> v;

    cout << round((double) (v-a) / (double) (a-b)) + 1;
    return 0;
}