// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class DataType{
public:DataType(char a, char b, int c, int d, float e, float f) {
	word1 = a; word2 = b; number1 = c;
	number2 = d; data1 = e; data2 = f;
}
	void chardeal(char a, char b) {
		cout << word1 << "&" << word2 << endl;
	};
	int intdeal(int c, int d) { int add; add = c + d; return add; };
	float floatdeal(float e, float f) { float divide; divide = e / f; return divide; };
private:char word1,word2;
		int number1,number2;
		float data1,data2;
};
int main(){
	DataType D1( 23,22,1,2,1.1,2.2);
	cout<<D1.intdeal(1,2)<<endl;
	cout << D1.floatdeal(1.1, 2.2) << endl;
	D1.chardeal(22, 23);
	return 0;

	
}