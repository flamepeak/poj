#include <iostream>
#include <math.h>

using namespace std;

/*
处理up和down状态方法：
当出现up或down状态时，天枰两边的所有硬币都应该被怀疑为假币（已标记必定为真币的硬币不必被怀疑）。

首先time[]记录每个硬币的被怀疑程度，time[i]=0表示该硬币i不被怀疑（即其可能为真币）。定义在up状态盘的硬币为“轻怀疑假币”，通过“--”操作加深其被怀疑为轻假币的程度，“负号”为轻假币的怀疑方向；在down状态盘的硬币为“重怀疑假币”，通过“++”操作加深其被怀疑为重假币的程度，“正号”为重假币的怀疑方向。

那么若一枚真币被怀疑为“轻假币”时，它就可能通过下次称量通过“++”操作取消嫌疑了。初始化所有硬币的怀疑程度均为0。

称量完毕后，找出被怀疑程度最大（注意取绝对值）的硬币，它就是假币。而当其怀疑方向为正时，则其为重假币。为负时，为轻假币。

*/


int main(void)
{
	int cases;
	cin >> cases;
	for (int c = 0; c < cases; c++)
	{
		char left[3][6], right[3][6], status[3][6];

		int times['L' + 1] = { 0 };  //标记各个字母的怀疑次数
		bool zero['L' + 1] = { false };//标记绝对为真币的字母，为even时

		for (int k = 0; k < 3; k++)
		{
			cin >> left[k] >> right[k] >> status[k];
		}

		for (int i = 0; i < 3; i++) //检查天平状态
		{
			switch (status[i][0])
			{
				case 'u':
				{
					for (int j = 0; left[i][j]; j++)
					{
						times[left[i][j]]++;  //左重
						times[right[i][j]]--; //右轻
					}
					break;

				}
				case 'd':
				{
					for (int j = 0; left[i][j]; j++)
					{
						times[left[i][j]]--;
						times[right[i][j]]++;
					}
					break;
				}
				case 'e':
				{
					for (int j = 0; left[i][j]; j++)
					{
						zero[left[i][j]] = true;
						zero[right[i][j]] = true;
					}
					break;
				}
			}
		}
		
		int max = -1; //查找被怀疑程度最高的硬币
		char alpha;
		for (int j = 'A'; j <= 'L'; j++)
		{
			if (zero[j])
				continue;
			if (max <= abs(times[j]))
			{
				max = abs(times[j]);
				alpha = j;
			}
		}

		cout << alpha << " is the counterfeit coin and it is ";
		if (times[alpha] < 0)
			cout << "light." << endl;
		else
			cout << "heavy." << endl;
	}
	return 0;
}