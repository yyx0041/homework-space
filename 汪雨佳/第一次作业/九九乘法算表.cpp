// 九九乘法算表.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	cout << "九九乘法算表" << endl;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i << "*" << j << "=" << i * j << " ";
		cout << endl;
	}return 0;
}