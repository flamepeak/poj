﻿/*
描述
输入一个ASCII码，输出对应的字符。

输入
一个整数，即字符的ASCII码，保证存在对应的可见字符。
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("%c", n);
	return 0;
}
