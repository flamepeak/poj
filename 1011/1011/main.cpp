/*
数学模型：给出n个数a1,a2,....,an,求出最小的k，使得这n个数分成若干组，每组的和都为k。
优化一：显然，k必须为n个数之和m的约数，只需要从小到大枚举m的每个约数t（t>=ai），判断t是否
可能为初始木棍的长度。
优化二：按照木棍长度递减序列搜索，避免重复
优化三：一旦发现某个木棍能够填满原始木棍，就没有必要考虑用更短的木棍代替

令InitLen为所求的最短原始棒长，maxlen为给定的棒子堆中最长的棒子，sumlen为这堆棒子的长度之和，那么InitLen必定在范围[maxlen，sumlen]中
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
int sticks[65], n, sum, num, l;//l最小的与木棒的长度 num：圆木棒的个数  sum:圆木棒的总长度
bool mark[65];
bool cmp(int a, int b)
{
	return a>b;
}

//s:已经组成的小木棒的个数，le:当前搜索时正在组成的小木条的长度。pos:要组合的小木条的下标位置
bool dfs(int s, int le, int pos)
{
	int i;
	bool sign = (le == 0 ? true : false);
	if (s == num)return true;
	for (i = pos + 1; i < n; i++)
	{
		if (mark[i])continue;//如果这个小木棒组合过则从下一个开始
		if (le + sticks[i] == l)//如果组合刚好组成l长度的木棒那么就要组合下一根木棒了即第s+1根
		{
			mark[i] = true;
			if (dfs(s + 1, 0, -1))//第s根已经组合成功了组合下一根
				return true;
			mark[i] = false;
			return false;//如果组合失败了那么就要返回false 而且这个木棒的状态应还原为没组合过
		}
		else if (le + sticks[i]<l)
			//如果组合当前这根后长度仍然小于l那么从i开始往下找继续组合第S根木棒
		{
			mark[i] = true;
			if (dfs(s, le + sticks[i], i))//如果可以组成就返回true
				return true;
			mark[i] = false;
			if (sign)return false;
			while (sticks[i] == sticks[i + 1])i++;
		}
	}
	return false;
}

int main()
{
	while (cin>>n &&n)
	{
		sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin>>sticks[i];
			sum += sticks[i];
		}
		sort(sticks, sticks + n, cmp);//将木棒从大到小排序
		for (l = sticks[0]; l <= sum; l++)//从最大的开始搜索
		{
			if (sum%l == 0)//如果该长度可以被整除那么可能是结果，否则继续
			{
				num = sum / l;//num：记录该情况下可以组成的木棒的数目。
				memset(mark, false, sizeof(mark));//每种情况都要进行初始化，把所有的木棒的使用状态设为false
				if (dfs(1, 0, -1))//当返回true时说明搜索成功了，可以组成该长度木条
				{
					printf("%d\n", l);
					break;
				}
			}
		}
	}
	return 0;
}