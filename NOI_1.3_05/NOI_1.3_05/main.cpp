﻿/*
描述
两个整数a和b分别作为分子和分母，既分数 a/b ，求它的浮点数值（双精度浮点数，保留小数点后9位）

输入
输入仅一行，包括两个整数a和b
输出
输出也仅一行，分数 a/b 的浮点数值（双精度浮点数，保留小数点后9位）
*/

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%.9lf", double(a) / b);
	return 0;
}

