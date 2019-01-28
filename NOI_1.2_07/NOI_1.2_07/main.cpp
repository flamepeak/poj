/*
输入一个除空格以外的可见字符（保证在函数scanf中可使用格式说明符%c读入），输出其ASCII码。
*/

#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);
	printf("%d", c);
	return 0;
}


