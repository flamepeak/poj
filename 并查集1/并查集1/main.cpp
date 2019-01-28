
/*
并查集，主要分三部分。
一：合并：给出两点关系，如果属于同一集合，进行merge
二：查：在合并时，需要先写出查，即找到该点的祖先点
三：集:merge后，将新加入的点的祖先点更新
然后，点集就因为共同的祖先点被分为不同的集合

Problem Description
某省调查城镇交通状况，得到现有城镇道路统计表，表中列出了每条道路直接连通的城镇。
省政府“畅通工程”的目标是使全省任何两个城镇间都可以实现交通（但不一定有直接的道路相连，只要互相间接通过道路可达即可）。
问最少还需要建设多少条道路？

Input
测试输入包含若干测试用例。每个测试用例的第1行给出两个正整数，分别是城镇数目N ( < 1000 )和道路数目M；
随后的M行对应M条道路，每行给出一对正整数，分别是该条道路直接连通的两个城镇的编号。为简单起见，城镇从1到N编号。
注意:两个城市之间可以有多条道路相通,也就是说
3 3
1 2
1 2
2 1
这种输入也是合法的
当N为0时，输入结束，该用例不被处理。

Output
对每个测试用例，在1行里输出最少还需要建设的道路数目。
*/

#include <stdio.h>
int father[1005];
int Find(int x)
{
	while (x != father[x])
		x = father[x];
	return x;
}

void Combine(int a, int b) //???
{
	int fa = Find(a);
	int fb = Find(b);
	if (fa != fb)
	{
		father[fa] = fb;
	}
}

int main()
{
	int n, m;
	int i;
	int a, b;
	while (~scanf("%d", &n))
	{
		if (n == 0)
			break;
		scanf("%d", &m);
		int sum = 0;
		for (i = 1; i <= n; i++)
			father[i] = i;
		for (i = 1; i <= m; i++)
		{
			scanf("%d%d", &a, &b);
			Combine(a, b);
		}
		for (i = 1; i <= n; i++)
		{
			if (father[i] == i)
				sum++;
		}
		printf("%d\n", sum - 1);
	}

}






