#include <iostream>
#include <algorithm>

using namespace std;


/*
有分别价值为1,2,3,4,5,6的6种物品，输入6个数字，表示相应价值的物品的数量，
问一下能不能将物品分成两份，是两份的总价值相等，其中一个物品不能切开，
只能分给其中的某一方，当输入六个0是（即没有物品了），这程序结束，总物品的总个数不超过20000

有两种解决方法：

第一种是几乎百度上所有同学都热衷的多重背包，确实这题就是《背包九讲》里面的“多重背包”的应用题，
直接套O(V*Σlog n[i])的模板就毫无悬念地AC了，《背包九讲》里面提供的是“多重背包+二进制优化”算法，
百度上也有不少同学加入了自己的想法去进一步优化，例如利用“抽屉原理”证明并“取模优化”的可行性等，
这些同学都做了不少功课，值得我们学习。

第二种方法是几乎没有同学使用的DFS，本题用DFS也能0ms跑完，可能大家都被《背包九讲》冲昏了头脑，
都想着套模板去了，但又看不懂模板。呻吟“研究了背包多长时间都不完全明白”的同学不妨试试DFS。
其实本来不少DP题都可以用搜索过的，大家不要钻牛角尖。

*/



bool flag;
int sum, half;
int n[7];

int DFS(int value, int pre)
{
	if (flag) return 0;

	if (value == half)
	{
		flag = true;
		return 0;
	}

	for (int i = pre; i >= 1; i--)
	{
		if (n[i])
		{
			if (value + i <= half)
			{
				n[i]--;
				DFS(value + i, i);

				if (flag) //IM
					break;
			}
		}
	}

	return 0;
}

int main(void)
{
	int iter = 1;
	while (true)
	{
		sum=0;
		for (int i = 1; i <= 6; i++)
		{
			cin >> n[i];
			sum += i*n[i];
		}		
		
		if (sum == 0)
		{
			break;
		}

		if (sum % 2)
		{
			cout << "Collection #" << iter++ << ':' << endl;
			cout << "Can't be divided." << endl << endl;
			continue;
		}

		half = sum / 2;
		flag = false;

		DFS(0, 6);

		if (flag)
		{
			cout << "Collection #" << iter++ << ':' << endl;
			cout << "Can be divided." << endl << endl;
			continue;
		}
		else
		{
			cout << "Collection #" << iter++ << ':' << endl;
			cout << "Can't be divided." << endl << endl;
			continue;
		}		
	}
	return 0;
}