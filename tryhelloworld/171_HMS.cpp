#include<iostream>
using namespace std;

int numOfPrime(int n)
{
    bool* isDivide = new bool[n+1] {false, };

    int answer = 0;

    for(int i=2; i<n+1; ++i)
    {
  	for(int j=2; i*j<=n; ++j)
        {
            if(isDivide[i*j] == false)
      	        isDivide[i*j] = true;
        }
    }
  
    for(int i=2; i<n+1; ++i)
    {
        if(isDivide[i] == false)
            answer++;
    }
  
    delete isDivide;
    isDivide = NULL;
    return answer;
}

int main()
{
    int testCase = 10;
    int testAnswer = numOfPrime(testCase);

    cout<<testAnswer;
}