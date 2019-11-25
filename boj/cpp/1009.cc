#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int a,b;
        cin >> a >> b;
        int result = 1;
        /*
        처음엔 거듭제곱하는 걸로 생각했는데 알고보니 전혀 아니였고
        그냥 끝자리만 알아내면 되는 문제였다
        */
        for (int i = 0; i < b ; i++) {
            result = result * a % 10;
        }
        // 왜 result 가 0 이 되나 했는데
        // 10은 거듭제곱하면 마지막 자리가 0이므로..
        if (result == 0) result = 10;
        
        cout << result << '\n';
    }
    
    return 0;
}