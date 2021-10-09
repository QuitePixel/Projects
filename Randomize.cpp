﻿﻿#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int const SIZE = 10;
	int A[SIZE];
	bool AlreadyThere;
	for (int i = 0; i < SIZE; )
	{
		AlreadyThere = false;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (A[j] == newRandomValue)
			{
				AlreadyThere = true;
				break;
			}
		}
		if (!AlreadyThere)
		{
			A[i] = newRandomValue;
			i++;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n A[" << i << "]=" << A[i];
	}
	return 0;
}