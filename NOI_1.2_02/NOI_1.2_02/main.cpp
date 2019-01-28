/*
分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小
*/

#include <stdio.h>

int main()
{
	float f;
	double lf;
	printf("%d %d", sizeof(f), sizeof(lf));
	return 0;
}

