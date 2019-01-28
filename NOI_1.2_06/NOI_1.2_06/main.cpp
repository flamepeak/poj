/*
描述
输入一个单精度浮点数，将其向零舍入到整数。

说明：向零舍入的含义是，正数向下舍入，负数向上舍入。

提示：可以使用强制类型转换来实现。
*/

#include <stdio.h>

int main()
{
	float f;
	scanf("%f", &f);
	printf("%d", int(f));
	return 0;
}

