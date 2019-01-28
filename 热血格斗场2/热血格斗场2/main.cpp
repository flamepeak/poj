
/* 正确解法
1.问题分析

每个人都有对应的实力值和id，而且每个人的实力值不同，用map<int,int>就可以了。
键——实力值，值——id，排序后找实力最接近的或id更小的那个。

2.解决方案
map<int,int>用来存放实力值和对应的id
判断当前实力值是否为最小或最大
找到上（下）一个最接近的实力值，相等时选前一个。
*/

#include <iostream>
#include <map>

using namespace std;

typedef map<int, int> M;
map<int, int>::iterator iter, pre, nex;

int main(void)
{
	int n;
	int id, strength;
	M player;
	player[1000000000] = 1;
	cin >> n;

	while (n--)
	{
		cin >> id >> strength;
		player[strength] = id;
		iter = player.find(strength);
		if (iter == player.begin())
		{
			nex = iter;
			nex++;
			cout << iter->second << " " << nex->second << endl;
		}
		else if (iter == player.end())
		{
			pre = iter;
			pre--;
			cout << iter->second << " " << pre->second << endl;
		}
		else
		{
			nex = iter;
			nex++;
			pre = iter;
			pre--;
			if (nex->first - iter->first < iter->first - pre->first)
			{
				cout << iter->second << " " << pre->second << endl;
			}
			else
			{
				cout << iter->second << " " << pre->second << endl;
			}
		}
	}


	return 0;
}