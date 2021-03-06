﻿/*
描述
一个城市中有两个犯罪团伙A和B，你需要帮助警察判断任意两起案件是否是同一个犯罪团伙所为，警察所获得的信息是有限的。假设现在有N起案件（N <= 100000），编号为1到N，每起案件由团伙A或团伙B所为。你将按时间顺序获得M条信息（M <= 100000），这些信息分为两类：
1. D[a][b]
其中[a]和[b]表示两起案件的编号，这条信息表明它们属于不同的团伙所为

2. A[a][b]
其中[a]和[b]表示两起案件的编号，这条信息需要你回答[a]和[b]是否是同一个团伙所为
注意你获得信息的时间是有先后顺序的，在回答的时候只能根据已经接收到的信息做出判断。


输入
第一行是测试数据的数量T（1 <= T <= 20）。
每组测试数据的第一行包括两个数N和M，分别表示案件的数量和信息的数量，其后M行表示按时间顺序收到的M条信息。
输出
对于每条需要回答的信息，你需要输出一行答案。如果是同一个团伙所为，回答"In the same gang."，如果不是，回答"In different gangs."，如果不确定，回答”Not sure yet."。


*/


#include <iostream>
#include <cstdio>
using namespace std;

char cmd;
int T, N, M, num1, num2, fx, fy;
int father[100100], relation[100100]; //

int Find_father(int x)
{
	int temp = 0;
	if (x == father[x])
		return x;
	else//路径压缩
	{
		temp = Find_father(father[x]);//找到父节点的父节点--即祖先节点
		relation[x] = (relation[father[x]] + relation[x]) % 2;//修改关系
		father[x] = temp;
	}
	return father[x];
}

void Union(int x, int y)//x和y是两个不同的犯罪团伙
{
	fx = Find_father(x);
	fy = Find_father(y);
	father[fx] = fy;//将x那一支归并到y的祖先节点下
	if (relation[y] == 0)//y和fy相同
		relation[fx] = 1 - relation[x];
	else
		relation[fx] = relation[x];
}

int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &N, &M);//N个案件，M条信息
		for (int i = 1; i <= N; i++)
		{
			father[i] = i;//将父节点初始化为本身
			relation[i] = 0;
		}
		while (M--)
		{
			getchar();//debug时发现如果不加这个读回车，cmd就变成了回车。

			scanf("%c%d%d", &cmd, &num1, &num2);

			if (cmd == 'D')
				Union(num1, num2);
			else if (cmd == 'A')
			{
				fx = Find_father(num1);
				fy = Find_father(num2);

				if (fx != fy)//不在并查集中
					printf("Not sure yet.\n");
				else if (relation[num1] == relation[num2])//与祖先节点关系相同
					printf("In the same gang.\n");
				else
					printf("In different gangs.\n");
			}
		}
	}
	return 0;
}




//Wrong Answer
/*
#include <iostream>

using namespace std;

#define Max 100005


int pre[Max * 2];
int rankVal[Max * 2];

int find(int x)
{
	if (x != pre[x])
		x = find(pre[x]);
	return x;
}

void merge(int a, int b)
{
	int fa = find(a);
	int fb = find(b);
	if (fa == fb)
		return;
	if (rankVal[a] > rankVal[b])
	{
		pre[b] = a;
		rankVal[a] += rankVal[b];
	}
	else
	{
		pre[a] = b;
		rankVal[b] += rankVal[a];
	}
}

bool judge(int a, int b)
{
	return find(a) == find(b);
}


int main(void)
{
	int T;
	cin >> T;
	int N, M;
	char AD;
	int a, b;
	while (T--)
	{
		cin >> N >> M;
		for (int i = 1; i <= 2*N; i++)
		{
			pre[i] = i;
			rankVal[i] = 1;
		}

		for (int i = 1; i <= M; i++)
		{
			cin >> AD >> a >> b;
			if (AD == 'D')
			{
				merge(a, b + N);
				merge(a + N, b);
			}
			if (AD == 'A')
			{
				if (judge(a, b + N))  cout << "In different gangs." << endl;
				else if (judge(a, b)) cout << "In the same gang."<<endl;
				else cout << "Not sure yet." << endl;
			}
		}

	}

	return 0;
}
*/





