#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double a, b, c;
	double X, Y;
	scanf("%d", &n);	
	while (n--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		if (b*b > 4 * a*c)
			printf("x1=%.5lf;x2=%.5lf\n", (0.0 - b + sqrt(b*b - 4 * a*c)) / (2 * a), (0.0 - b - sqrt(b*b - 4 * a*c)) / (2 * a));
		else if (b*b == 4 * a*c)
			printf("x1=x2=%.5lf\n", (0.0 - b) / (2 * a));
		else
		{//实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
			X = (0.0 - b) / (2 * a);
			Y = sqrt(4 * a*c - b*b) / (2 * a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5fi\n", X, Y, X, Y);
		}
	}
	return 0;
}
