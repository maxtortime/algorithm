#include <iostream>
#include <vector>

using namespace std;
bool is_prime(int n) {
    if (n<=1) return false;
    else if (n<=3) return true;
    else if (n%2==0 or n%3==0) return false;
    
    int i = 5;
    while (i*i<=n) {
        if (n%i==0 or n%(i+2)==0) return false;
        i+=6;
    }
    return true;
}
int main() {
    vector<int> primes;
    int num = 2;

    while (primes.size()<=10001) {
        if (is_prime(num)) primes.push_back(num);
        
        num++;
    }

    cout << primes[10000] << '\n';

} 
