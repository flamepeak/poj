#include <stdio.h>

int main()
{
	char c;
	int n;
	float f;
	double lf;
	scanf("%c%d%f%lf", &c, &n, &f, &lf);
	printf("%c %d %.6f %.6lf", c, n, f, lf);
	return 0;
}
