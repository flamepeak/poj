/*
读入一个双精度浮点数，保留12位小数，输出这个浮点数。
*/

#include <stdio.h>

int main()
{
	double f;  
	scanf("%lf", &f); //lf对应双精度  f对应单精度
	printf("%.12lf", f);
	return 0;
}