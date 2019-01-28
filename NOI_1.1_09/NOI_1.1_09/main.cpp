/*输出字符菱形

描述
给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。

输入
输入只有一行， 包含一个字符。

*/


#include <iostream>

using namespace std;
int line = 5; //必须为奇数
int column = line;

int main(void)
{
	char symbol;
	cin >> symbol;
	for (int i = 1; i <= line; i++)// 遍历所有行
	{
		if (i < (line + 1) / 2 + 1)  //上半部分（包括中间一行）
		{
			for (int j = 1; j <= column; j++) // 遍历上半部分的所有列
				if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1))
					cout << symbol;
				else
					cout << " ";
		}
		else
		{
			for (int j = 1; j <= column;j++)
				if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i))
					cout << symbol;
				else
					cout << " ";
		}
		cout << endl;		
		
	}

	return 0;
}











