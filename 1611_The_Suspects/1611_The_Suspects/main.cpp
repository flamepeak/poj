#include <iostream>

#define M 30005

int a[M], pre[M];

int find(int x)
{
	//找到祖先结点
	if (x != pre[x])
		pre[x] = find(pre[x]);  //由父节点递归查询
	return pre[x];
}

void merge(int x, int y)
{
	int prex = find(x);
	int prey = find(y);

	if (prex == prey)
	{
		return;
	}
	pre[prey] = prex;
	a[prex] += a[prey];
}



int main(void)
{
	int n, m;
	int k, x, y;
	
	while (~scanf("%d %d", &n, &m))
	{
		if (n == 0 && m == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			pre[i] = i;
			a[i] = 1;
		}
			
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &k, &x);
			k--;
			while (k--)
			{
				scanf("%d", &y);
				merge(x, y);
			}
		}
		printf("%d\n", a[find(0)]);
	}

	return 0;
}





