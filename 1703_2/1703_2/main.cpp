/*
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

using namespace std;

#define Max 100005


int pre[Max * 2];
//int rankVal[Max * 2];

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
	pre[a] = b;
	/*if (rankVal[a] > rankVal[b])
	{
		pre[b] = a;
		rankVal[a] += rankVal[b];
	}
	else
	{
		pre[a] = b;
		rankVal[b] += rankVal[a];
	}*/
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
		for (int i = 1; i <= 2 * N; i++)
		{
			pre[i] = i;
			//rankVal[i] = 1;
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
				if (judge(a, b + N) || judge(a+N, b))  cout << "In different gangs." << endl;
				else if (judge(a, b) || judge(a+N, b+N)) cout << "In the same gang." << endl;
				else cout << "Not sure yet." << endl;
			}
		}

	}
	return 0;
}






