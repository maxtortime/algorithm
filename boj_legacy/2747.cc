#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n)
{
  vector<long long> r = {0,1};
  for (int i = 2 ; i <= n ; i++)
    r.push_back(r[i-1]+r[i-2]);

  return r.back();
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
}
