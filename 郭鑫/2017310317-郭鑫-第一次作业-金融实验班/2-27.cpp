#include"pch.h"
#include<iostream>
using namespace std;

int main() {
	int score;
	cout << "你考试考了多少分？（0~100）：";
	cin >> score;
	if (score < 60)
		cout << "差";
	else
		if (score < 80)
			cout << "中";
		else
			if (score < 90)
				cout << "良";
			else
				cout << "优";
				return 0;
}