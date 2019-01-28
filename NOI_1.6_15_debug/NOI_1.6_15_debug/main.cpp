/*
15:阶乘和
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
用高精度计算出S=1!+2!+3!+…+n!（n≤50）

其中“!”表示阶乘，例如：5!=5*4*3*2*1。

输入正整数N，输出计算结果S。

输入
一个正整数N。
输出
计算结果S。

*/

#include <iostream>

#define MAX 100000

using namespace std;

int val[MAX] = { 0, 1 }, sum[MAX];

int main()
{
	int N, high = 1;
	cin >> N;
	for (int per = 1; per <= N; per++)
	{
		//calculate  i!
		//for (int j = 1; j <= per; j++)
		{
			for (int k = 1; k <= high; k++)
			{
				val[k] *= per;
			}
			for (int k = 1; k <= high + 4; k++)
			{
				val[k + 1] = val[k + 1] + val[k] / 10;
				val[k] = val[k] % 10;
			}
			for (int m = high + 5; m >= high; m--)
			{
				if (val[m] != 0)
				{
					high = m;
					break;
				}
			}
		}

		for (int i = high; i >= 1; i--)
			cout << val[i];
		cout << endl;

		/*
		// calculate sum[]
		for(int i=1;i<=high;i++)
		{
		sum[i] += val[i];
		}
		for(int i=1;i<=high;i++)
		{
		sum[i+1] = sum[i+1] + sum[i]/10;
		sum[i] = sum[i]%10;
		}*/
	}
	//if(sum[high+1]!=0)
	//    high++;
	//for(int i=high;i>=1;i--)
	//    cout<<sum[i];


	return 0;
}
