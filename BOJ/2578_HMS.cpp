// Bingo.cpp : https://www.acmicpc.net/problem/2578
// Math

#include <iostream>

using namespace std;

int main(void)
{
	int bingo[25];
	int callNum[25];
	int possible[5][5] = { 0, };

	int count = 0;
	int callCount = 0;

	for (int i = 0; i < 25; ++i)
		cin >> bingo[i];

	for (int i = 0; i < 25; ++i)
		cin >> callNum[i];
	
	for (int i = 0; i < 25, count < 3; ++i)
	{
		callCount++;
		int idx;
		for (int j = 0; j < 25; ++j)
		{
			if (bingo[j] == callNum[i])
			{
				idx = j;
				break;
			}
		}
		possible[idx / 5][idx % 5] = 1;

		bool isBingoH = true;
		bool isBingoV = true;
		bool isBingoD1 = true;
		bool isBingoD2 = true;
		for (int m = 1; m < 5; ++m)
		{
			isBingoH &= (bool)possible[idx / 5][(idx % 5 + m) % 5];
			isBingoV &= (bool)possible[(idx / 5 + m) % 5][idx % 5];
			idx % 6 == 0 ? isBingoD1 &= (bool)possible[(idx / 5 + m) % 5][(idx % 5 + m) % 5] : isBingoD1 = false;
			idx > 0 && idx < 24 && idx % 4 == 0 ? isBingoD2 &= (bool)possible[(idx / 5 + m) % 5][4 - (idx / 5 + m) % 5] : isBingoD2 = false;
		}

		isBingoH ? count++ : 0;
		isBingoV ? count++ : 0;
		isBingoD1 ? count++ : 0;
		isBingoD2 ? count++ : 0;
	}
	cout << callCount << endl;

	return 0;
}