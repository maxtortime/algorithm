// Zoo.cpp : https://www.acmicpc.net/problem/1309
// DP

#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	unsigned int cage[100000] = { 0, };

	cage[0] = 1;
	cage[1] = 3;

	for (int i = 2; i <= N; ++i)
		cage[i] = (2 * cage[i - 1] + cage[i - 2])%9901;

	cout << cage[N] << endl;

	return 0;
}