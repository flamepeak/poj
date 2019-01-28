/*

没做出来

*/



/*最佳加法表达式
描述
给定n个1到9的数字，要求在数字之间摆放m个加号(加号两边必须有数字），使得所得到的加法表达式的值最小，并输出该值。例如，在1234中摆放1个加号，最好的摆法就是12+34,和为36

输入
有不超过15组数据
每组数据两行。第一行是整数m，表示有m个加号要放( 0<=m<=50)
第二行是若干个数字。数字总数n不超过50,且 m <= n-1
输出
对每组数据，输出最小加法表达式的值
*/


/*
v[m][n]表示在n个数里加m个加号的最小总和

num[i][j]表示从第i位到第j位的数的值

先走一步看看，考虑最右面的加号的位置，确定加号放在i位置后，v[m][n]=v[m-1][i]+num[i+1][n],最后一个加号的位置有多个，此时选最小的那个。。

要避免重复计算：将数存起来，事先算好num(i,j)，到时就可以直接拿来用


*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define p 1005

const int INF = 99999999;

int num[p][p], v[p][p];
char a[p];


int main(void)
{
	int n, m;
	
	while (scanf_s("%d", &m)!=EOF)
	{
		scanf_s("%s", a + 1);//从数组下标1开始存储
		n = strlen(a + 1);
		for (int i = 1; i <= n; i++)
		{
			num[i][i] = a[i] - '0';//字符型转换为整型
			for (int j = i+1; j <= n; j++)
				num[i][j] = num[i][j - 1] * 10 + (a[j] - '0');
		}
		memset(v, 0x3f, sizeof(v));
		for (int j = 1; j <= n; j++)
			v[0][j] = num[1][j];

		for (int i = 1; i <= m;i++)
			for (int j = 1; j <= n; j++)
			{
				if (j - 1 < i)
					v[i][j] = INF;
				else
				{
					int t = INF;
					for (int k = i; k < j; k++)
						t = min(t, v[i - 1][k] + num[k + 1][j]);
					v[i][j] = t;
				}
			}
			cout << v[m][n] << endl;

	}


	return 0;
}
