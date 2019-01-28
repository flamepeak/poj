﻿/*
描述
给定一个字符，用它构造一个底边长5个字符，高3个字符的等腰字符三角形。

输入
输入只有一行， 包含一个字符。
输出
该字符构成的等腰三角形，底边长5个字符，高3个字符。

*/

#include <stdio.h>

int main()
{
	char symbol;
	scanf("%c", &symbol);
	printf("  %c\n", symbol);
	printf(" %c%c%c\n", symbol, symbol, symbol);
	for (int i = 0; i < 5; i++)
		printf("%c", symbol);
	printf("\n");
	return 0;
}