/*
求自身到自身的最大转换率

最简单的方法是floyd算法变形，求最大路径后，求最大环，查看是否满足条件
每一个结点都必须有到自身的环

使用容器
*/

#include<iostream>
#include<map>
#include<string>
#include<cstring> //由于memset 在G++中会出现not declare，必须加此项

const int INF=10000;
int n;
int m;

std::map<std::string, int> STL; //注意写法，必须加std

double rate;
char str[50], str1[50], str2[50];
double dist[31][31];

using namespace std;



void floyd(void)
{
	for (int k = 1; k <= n;k++)
		for (int i = 1; i <= n;i++)
			for (int j = 1; j <= n;j++)
			if (dist[i][j] < dist[i][k] * dist[k][j])  //变形的最大路径+ 变为*
				dist[i][j] = dist[i][k] * dist[k][j];
}


int main(void)
{
	int cases = 1;
	while (cases)
	{
		memset(dist, INF, sizeof(dist));

		cin >> n;
		if (!n) break;
		for (int i = 1; i <= n; i++)
		{
			cin >> str;
			STL[str] = i;
			dist[i][i] = 1;
		}

		cin >> m;
		for (int i = 1; i <= m; i++)
		{
			cin >> str1 >> rate >> str2;
			dist[STL[str1]][STL[str2]] = rate;
		}

		floyd();

		bool flag = false;
		for (int i = 1; i <= n; i++)
		{
			if (dist[i][i]>1)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "Case " << cases++ << ": Yes" << endl;
		else
			cout << "Case " << cases++ << ": No" << endl;

	}

	return 0;
}




