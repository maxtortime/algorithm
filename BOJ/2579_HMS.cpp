// ClimbingStairs.cpp : https://www.acmicpc.net/problem/2579
// DP problem

#if 0
#include <iostream>

#define MAX(a, b) (a >= b? a : b)

using namespace std;

int main()
{
	int stairs;
	cin >> stairs;

	int scores[300];
	int sum[300];

	for (int i = 0; i < stairs; ++i)
		cin >> scores[i];

	sum[0] = scores[0];
	sum[1] = scores[1] + scores[0];
	sum[2] = scores[2] + MAX(sum[0], scores[1]);

	for (int i = 3; i < stairs; ++i)
	{
		sum[i] = scores[i] + MAX(sum[i - 2], scores[i - 1] + sum[i - 3]);
	}

	int result = sum[stairs-1];

	cout << result << endl;

    return 0;
}
#endif