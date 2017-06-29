#include <iostream>
#include <cassert>
#include <climits>

using namespace std;

int main() {
    int N;
    int i;
    int min = INT_MAX;
    int max = INT_MIN;
    cin >> N;

    assert(N >=1 && N <=1000000);
    int nums[1000000] = {0, };

    for (i = 0 ; i < N ; i++) {
        cin >> nums[i];
    }

    for (i = 0; i < N ; i++) {
        if (nums[i] < min)
            min = nums[i];
        
        if (nums[i] > max)
            max = nums[i];
    }

    cout << min << " " << max << "\n";
}
