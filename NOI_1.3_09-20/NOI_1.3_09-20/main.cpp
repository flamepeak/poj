/*描述
给出圆的半径，求圆的直径、周长和面积。

输入
输入包含一个实数r（0 < r <= 10,000），表示圆的半径。
输出
输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。
*/

#include <stdio.h>
#define PI 3.14159

int main()
{
	double r, R, l, S;
	scanf("%lf", &r);
	printf("%.4lf %.4lf %.4lf", 2*r, 2*PI*r, PI*r*r);
	return 0;
}




/*
描述
对于阻值为r1和r2的电阻，其并联电阻阻值公式计算如下：

R = 1/(1/r1 + 1/r2)

输入
两个电阻阻抗大小，浮点型，以一个空格分开。
输出
并联之后的阻抗大小，结果保留小数点后2位

*/

#include <stdio.h>

int main()
{
	float r1, r2, R;
	scanf("%f%f", &r1, &r2);
	printf("%.2f", 1.0/(1/r1+1/r2));
	return 0;
}



/*
描述
计算两个双精度浮点数a和b的相除的余数，a和b都是正数的。这里余数（r）的定义是：a = k * b + r，其中 k是整数， 0 <= r < b。

输入
输入仅一行，包括两个双精度浮点数a和b。
输出
输出也仅一行，a÷b的余数
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%g", a-floor(a/b)*b);
	return 0;
}



/*
描述
对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。

现给定r，求V。

输入
输入为一个不超过100的非负实数，即球半径，类型为double。
输出
输出一个实数，即球的体积，保留到小数点后2位。

*/

#include <stdio.h>
#define PI 3.14

int main()
{
	double r, V;
	scanf("%lf", &r);
	printf("%.2lf", 4.0/3*PI*r*r*r);  //必须写成4.0
	return 0;
}



/*13:反向输出一个三位数
描述
将一个三位数反向输出。

输入
一个三位数n。
输出
反向输出n。
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d%d%d",n%10,(n/10)%10,n/100); 
	return 0;
}




/*
14:大象喝水

描述
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。
输出
输出一行，包含一个整数，表示大象至少要喝水的桶数。

*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	unsigned int h, r;
	float v = 20000.0;
	scanf("%d %d", &h, &r);
	int x = ceil(v / (PI*r*r*h));
	printf("%d", x); //????  不知什么原因，ceil（）放到内部输出0，
	return 0;
}





/*
15:苹果和虫子
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

输入
输入仅一行，包括n，x和y（均为整数）。输入数据保证y <= n * x。
输出
输出也仅一行，剩下的苹果个数

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	x = floor(n - (1.0 / x)*y);
	printf("%d", x); //????  不知什么原因，ceil（）放到内部输出0，
	return 0;
}





/*
16:计算线段长度
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
已知线段的两个端点的坐标A（Xa,Ya），B（Xb，Yb），求线段AB的长度。

输入
共两行。
第一行是两个实数Xa，Ya，即A的坐标。
第二行是两个实数Xb，Yb，即B的坐标。
输入中所有实数的绝对值均不超过10000。
输出
一个实数，即线段AB的长度，保留到小数点后3位。
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double Xa, Ya, Xb, Yb;
	scanf("%lf%lf", &Xa, &Ya);
	scanf("%lf%lf", &Xb, &Yb);
	printf("%.3lf",sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb))); //????  不知什么原因，ceil（）放到内部输出0，
	return 0;
}








/*
17:计算三角形面积
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。

输入
输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
输出
输出也是一行，输出三角形的面积，精确到小数点后两位。
*/


/*海伦公式
有一个三角形，边长分别为a、b、c，三角形的面积S可由以下公式求得
S = sqrt(p*(p-a)*(p-b)*(p-c))  p = (a+b+c)/2
*/


#include <stdio.h>
#include <math.h>

float lengthAB(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	float x1, y1, x2, y2, x3, y3;
	scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
	float a = lengthAB(x1, y1, x2, y2);
	float b = lengthAB(x1, y1, x3, y3);
	float c = lengthAB(x2, y2, x3, y3);
	float p = (a + b + c) / 2.0;
	printf("%.2f", sqrt(p*(p - a)*(p - b)*(p - c)));
	return 0;
}






/*
18:等差数列末项计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出一个等差数列的前两项a1，a2，求第n项是多少。

输入
一行，包含三个整数a1，a​2，n。-100 <= a1,a​2 <= 100，0 < n <= 1000。
输出
一个整数，即第n项的值。

*/

#include <stdio.h>

int main()
{
	int a1, a2, n;
	scanf("%d%d%d", &a1, &a2, &n);
	printf("%d", a1 + (n - 1)*(a2 - a1));
	return 0;
}



/*
19:A*B问题
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入两个正整数A和B，求A*B。

输入
一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
输出
一个整数，即A*B的值。
*/



//注意长整数
#include <iostream>

using namespace std;

int main()
{
	long long A, B;
	cin >> A >> B;
	cout << A*B;
	return 0;
}

//或者 用C
#include <stdio.h>

int main()
{
	unsigned long int A, B;  // 注意long int 会溢出
	scanf("%lu%lu", &A, &B);
	printf("%lu", A*B);
	return 0;
}





/*
20:计算2的幂
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定非负整数n，求2n。

输入
一个整数n。0 <= n < 31。
输出
一个整数，即2的n次方。
*/



#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	long long ans = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		ans *= 2;
	cout << ans;
	return 0;
}
