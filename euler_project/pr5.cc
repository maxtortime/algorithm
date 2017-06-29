#include <iostream>
#include <cstdlib>
#include <cassert>

int main(int argc, char** argv) {
    assert(argc>1);
    unsigned long num = 1;
    const long int target = atoi(argv[1]);

    while(1) {
        int i;
        
        for (i = 1; i<=target ; i++) {
            if(num % i != 0) {
                num++;
                break;
            }
        }

        if(i == target+1) break;
    }

    std::cout << num << '\n';
}
