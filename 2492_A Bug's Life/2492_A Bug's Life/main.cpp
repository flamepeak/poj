/*
给定n只虫子 不同性别的可以在一起 相同性别的不能在一起
给你m对虫子 判断中间有没有同性别在一起的；
我们把同性的放到一个集合里 如果一个集合里出现了异性 则说明存在同性恋在一起
假设 x 为一种性别 x+n为与其相反的性别
若a,b为同性 的  我们则可以把判断 (a，b+n)  (b,a+n)为异性反之亦然；


*/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

const int maxn = 5000;

int par[maxn];

int find(int x)
{
	if (x != par[x])
		par[x] = find(par[x]);
	return par[x];
}

void merge(int a, int b)
{
	int x = find(a);
	int y = find(b);
	if (x != y)
		par[x] = y;
}

bool judge(int x, int y) //判断是否为同性, 异性为真， 同性为假
{
	x = find(x);
	y = find(y);
	if (x != y)
		return true;
	return false;
}


int main(void)
{
	int t, n, m, cas = 1;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d%d", &n, &m);
		for (int i = 0; i <= 2 * n; i++)
			par[i] = i;
		bool l = true;
		int x, y;
		while (m--)
		{
			scanf("%d%d", &x, &y);
			if (judge(x, y) || judge(x + n, y + n))
			{
				merge(x, y + n);//同性的放到一个集合里
				merge(x + n, y);
			}
			else
				l = false;
		}
		if (i != 1)
			puts("");  //puts() 标准输出设备(屏幕)写字符串并换行
		printf("Scenario #%d:\n", cas++);
		if (l)
			printf("No suspicious bugs found!\n");
		else
			printf("Suspicious bugs found!\n");

	}
	return 0;
}






