/*
描述
给定3个整数a、b、c，计算表达式(a+b)*c的值。

输入
输入仅一行，包括三个整数a、b、c, 数与数之间以一个空格分开。
(－10,000 < a,b,c < 10,000)
输出
输出一行，即表达式的值
*/

#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b)*c;
	return 0;
}