#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a,int b)
{
	vector<int> answer;
  int gcd = 1;
  int lcm = a*b;
  
  while(b!=0)
  {
    //if(b==0) break;
  	int remain = a%b; 
  	a = b;
  	b = remain;
  }
	gcd = a;
  lcm = lcm/a;
  answer.push_back(gcd);
  answer.push_back(lcm);
	return answer;
}

int main()
{
	int a=3, b=12;
	vector<int> testAnswer = gcdlcm(a,b);

	cout<<testAnswer[0]<<" "<<testAnswer[1];
}