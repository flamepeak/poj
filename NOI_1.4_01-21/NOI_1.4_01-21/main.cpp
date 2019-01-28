﻿
/*
01:判断数正负
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个整数N，判断其正负。



输入
一个整数N(-109 <= N <= 109)
输出
如果N > 0, 输出positive;
如果N = 0, 输出zero;
如果N < 0, 输出negative
*/


#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	if (n > 0)
		cout << "positive";
	else if (n == 0)
		cout << "zero";
	else
		cout << "negative";
	return 0;
}





/*
02:输出绝对值
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个浮点数，输出这个浮点数的绝对值。

输入
输入一个浮点数，其绝对值不超过10000。
输出
输出这个浮点数的绝对值，保留到小数点后两位。
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float n;
	scanf("%f", &n);
	printf("%.2f", fabs(n));  //浮点数绝对值要用fabs
	return 0;
}


/*
03:奇偶数判断
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个整数，判断该数是奇数还是偶数。

输入
输入仅一行，一个大于零的正整数n。
输出
输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even。
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	return 0;
}




/*
04:奇偶ASCII值判断
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO
例如，字符A的ASCII值是65，则输出YES，若输入字符B(ASCII值是66)，则输出NO

输入
输入一个字符
输出
如果其ASCII值为奇数，则输出YES，否则，输出NO


*/

#include <stdio.h>


int main()
{
	char ch;
	scanf("%c", &ch);
	if (int(ch) % 2 == 0)
		printf("NO");
	else
		printf("YES");
	return 0;
}



/*
05:整数大小比较
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入两个整数，比较它们的大小。

输入
一行，包含两个整数x和y，中间用单个空格隔开。
0 <= x < 2^32, -2^31 <= y < 2^31。
输出
一个字符。
若x > y，输出 > ；
若x = y，输出 = ；
若x < y，输出 < ；
*/


#include <iostream>

using namespace std;

int main()
{
	long x, y;
	cin >> x >> y;
	if (x > y)
		cout << ">";
	else if (x == y)
		cout << "=";
	else
		cout << "<";
	return 0;
}


/*
06:判断是否为两位数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
判断一个正整数是否是两位数（即大于等于10且小于等于99）。

输入
一个正整数，不超过1000。
输出
一行。若该正整数是两位数，输出1，否则输出0。
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>> n;
	if (n >= 10 && n <= 99)
		cout << "1" << endl;
	else
		cout << "0" << endl;

	return 0;
}



/*
07:收集瓶盖赢大奖
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
某饮料公司最近推出了一个“收集瓶盖赢大奖”的活动：如果你拥有10个印有“幸运”、或20个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。

现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，判断是否可以去兑换大奖。

输入
一行，包含两个整数，分别是印有“幸运”和“鼓励”的瓶盖数，用一个空格隔开。
输出
一行。若可以兑换大奖，输出1，否则输出0。
*/

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n >= 10 || m >= 20)
		cout << "1" << endl;
	else
		cout << "0" << endl;
	return 0;
}




/*
08:判断一个数能否同时被3和5整除
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
判断一个数n 能否同时被3和5整除

输入
输入一行，包含一个整数n。（ -1,000,000 < n < 1,000,000）
输出
输出一行，如果能同时被3和5整除输出YES，否则输出NO
*/


#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n%3==0 && n%5==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}




/*
09:判断能否被3，5，7整除
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个整数，判断它能否被3，5，7整除，并输出以下信息：
1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
2、只能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）；
3、只能被其中一个数整除（输出这个除数）；
4、不能被任何数整除，输出小写字符‘n’,不包括单引号。

输入
输入一行，包括一个整数。
输出
输出一行，按照描述要求给出整数被3，5，7整除的情况。
*/


#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool flag1 = false, flag2=false, flag3=false;
	if (n % 3 == 0)
	{
		cout << "3"; 
		flag1 = true;
	}		
	if (n % 5 == 0)
	{
		if (flag1)
			cout << " ";
		cout << "5";
		flag2 = true;
	}
	if (n % 7 == 0)
	{
		if (flag1 || flag2)
			cout << " ";
		cout << "7" << endl;
		flag2 = true;
	}
	if (!flag1 && !flag2 && !flag3)
		cout << "n";


	return 0;
}




/*
10:有一门课不及格的学生
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出一名学生的语文和数学成绩，判断他是否恰好有一门课不及格（成绩小于60分）。

输入
一行，包含两个在0到100之间的整数，分别是该生的语文成绩和数学成绩。
输出
若该生恰好有一门课不及格，输出1；否则输出0。
*/


#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if ((n < 60 && m >= 60) || (n >= 60 && m < 60))
		cout << "1";
	else
		cout << "0";


	return 0;
}




/*
11:晶晶赴约会
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。

输入
输入有一行，贝贝邀请晶晶去看展览的日期，用数字1到7表示从星期一到星期日。
输出
输出有一行，如果晶晶可以接受贝贝的邀请，输出YES，否则，输出NO。注意YES和NO都是大写字母！
*/


#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1 || n == 3 || n == 5)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}



/*
12:骑车与走路
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在北大校园里,没有自行车,上课办事会很不方便.但实际上,并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间.假设找到自行车,开锁并车上自行车的时间为27秒;停车锁车的时间为23秒;步行每秒行走1.2米,骑车每秒行走3.0米。请判断走不同的距离去办事,是骑车快还是走路快。

输入
输入一行，包含一个整数，表示一次办事要行走的距离,单位为米。
输出
输出一行,如果骑车快,输出一行"Bike";如果走路快,输出一行"Walk";如果一样快,输出一行"All"。

*/

#include <iostream>

using namespace std;

int main()
{
	float t1, t2;
	int len;
	cin >> len;
	t1 = 27 + 23 + len / 3.0;
	t2 = len / 1.2;
	if (t1 < t2)
		cout << "Bike";
	else if (t1 == t2)
		cout << "All";
	else
		cout << "Walk";
	return 0;
}



/*
13:分段函数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
编写程序，计算下列分段函数y=f(x)的值。

y=-x+2.5; 0 <= x < 5

y=2-1.5(x-3)(x-3); 5 <= x < 10

y=x/2-1.5; 10 <= x < 20

输入
一个浮点数N,0 <= N < 20
输出
输出N对应的分段函数值：f(N)。结果保留到小数点后三位
*/

#include <stdio.h>

int main()
{
	float N;
	scanf("%f", &N);
	if (N >= 0 && N < 5)
		printf("%.3f", 2.5 - N);
	else if (N >= 5 && N < 10)
		printf("%.3f", 2 - 1.5*(N - 3)*(N - 3));
	else
		printf("%.3f", N / 2.0 - 1.5);
	return 0;
}



/*
14:计算邮资
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
根据邮件的重量和用户是否选择加急计算邮费。计算规则：重量在1000克以内(包括1000克), 基本费8元。超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；如果用户选择加急，多收5元。

输入
输入一行，包含整数和一个字符，以一个空格分开，分别表示重量（单位为克）和是否加急。如果字符是y，说明选择加急；如果字符是n，说明不加急。
输出
输出一行，包含一个整数，表示邮费。
*/

#include <stdio.h>
#include <math.h>


int main()
{
	int w, price = 0;
	char ch;
	scanf("%d %c", &w, &ch);
	if (w <= 1000)
		price = 8;
	else
		price = 8 + ceil((w - 1000) / 500.0) * 4;

	if (ch == 'y')
		price += 5;
	printf("%d", price);
	return 0;
}





/*
15:最大数输出
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入三个整数,输出最大的数。

输入
输入为一行，包含三个整数，数与数之间以一个空格分开。
输出
输出一行，包含一个整数，即最大的整数。
*/

#include <iostream>

using namespace std;

int bigger(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int main()
{
	int a, b, c, biggest;
	cin >> a >> b >> c;
	biggest = bigger(a, bigger(b, c));
	cout << biggest;
	return 0;
}




/*
16:三角形判断
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。

输入
输入共一行，包含三个正整数，分别表示三条线段的长度，数与数之间以一个空格分开。
输出
如果能构成三角形，则输出“yes” ，否则输出“no”。
*/

#include <iostream>

using namespace std;


int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
		cout << "yes";
	else
		cout << "no";
	return 0;
}





/*
17:判断闰年
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
判断某年是否是闰年。
输入
输入只有一行，包含一个整数a(0 < a < 3000)
输出
一行，如果公元a年是闰年输出Y，否则输出N
*/


/*

公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年，
能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。
*/

#include <iostream>

using namespace std;


int main()
{

	int year;
	cin >> year;
	if (year % 4 == 0)
	{
		if ((year % 100 == 0 && year % 400 != 0) || year % 3200 == 0)
			cout << "N";
		else
			cout << "Y";

	}
	else
		cout << "N" << endl;
	return 0;
}







/*
18:点和正方形的关系
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。

输入
输入一行，包括两个整数x、y，以一个空格分开，表示坐标(x,y)。
输出
输出一行，如果点在正方形内，则输出yes，否则输出no。
*/



#include <iostream>

using namespace std;


int main()
{

	int x, y;
	cin >> x >> y;
	if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}





/*
19:简单计算器
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。

输入
输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
输出
输出只有一行，一个整数，为运算结果。然而：
1. 如果出现除数为0的情况，则输出：Divided by zero!
2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
*/



#include <iostream>

using namespace std;


int main()
{

	int x, y;
	char ch;
	cin >> x >> y >> ch;
	if (ch == '+')
		cout << x + y << endl;
	else if (ch == '-')
		cout << x - y << endl;
	else if (ch == '*')
		cout << x*y << endl;
	else if (ch == '/')
	{
		if (y == '0')
			cout << "Divided by zero!" << endl;
		cout << x / y << endl;
	}
	else
		cout << "Invalid operator!" << endl;

	return 0;
}





/*
19:简单计算器
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。

输入
输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）。
输出
输出只有一行，一个整数，为运算结果。然而：
1. 如果出现除数为0的情况，则输出：Divided by zero!
2. 如果出现无效的操作符(即不为 +, -, *, / 之一），则输出：Invalid operator!
*/



#include <iostream>

using namespace std;


int main()
{

	int x, y;
	char ch;
	cin >> x >> y >> ch;
	switch (ch)
	{
	case '+':cout << x + y << endl; break;
	case '-':cout << x - y << endl; break;
	case '*':cout << x*y << endl; break;
	case '/':
	{
				if (y == 0)
				{
					cout << "Divided by zero!" << endl;
					break;
				}
				else
				{
					cout << x / y << endl; break;
				}
	}
	default:cout << "Invalid operator!" << endl;
	}

	return 0;
}



/*
20:求一元二次方程的根
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a), x2 = (-b - sqrt(b*b-4*a*c))/(2*a)求一元二次方程ax2+ bx + c =0的根，其中a不等于0。

输入
输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程ax2 + bx + c =0的系数。
输出
输出一行，表示方程的解。
若b2 = 4 * a * c,则两个实根相等，则输出形式为：x1=x2=...。
若b2 > 4 * a * c,则两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1>x2。
若b2 < 4 * a * c，则有两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，即x1的虚部系数大于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)

所有实数部分要求精确到小数点后5位，数字、符号之间没有空格。
*/



#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	double a = 0, b = 0, c = 0, i = 0, j = 0, l = 0, x1 = 0, x2 = 0, x = 0, y = 0, z = 0;
	scanf("%lf%lf%lf", &a, &b, &c);
	x1 = (0 - b + sqrt(b*b - 4 * a*c)) / (2 * a), x2 = (0 - b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (b*b == 4 * a*c)
	{
		printf("x1=x2=%0.5lf", x1);
	}
	else if (b*b>4 * a*c)
	{
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	else if (b*b<4 * a*c)
	{
		i = (0 - b) / (2 * a); //此处必须0-b
		j = sqrt(4 * a*c - b*b) / (2 * a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", i, j, i, j);
	}
	printf("\n");
	return 0;
}





/*
21:苹果和虫子2
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

输入
输入仅一行，包括n，x和y（均为整数）。
输出
输出也仅一行，剩下的苹果个数
*/



#include<iostream>
using namespace std;
int main()
{
	int n, x, y, r;
	cin >> n >> x >> y;
	if (y%x == 0)
		r = y / x >= n ? 0 : n - y / x;
	else
		r = y / x >= n - 1 ? 0 : n - 1 - y / x;
	cout << r << endl;
	return 0;
}











