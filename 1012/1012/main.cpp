#include <iostream>

using namespace std;

/*
ans[i]; //第i轮杀掉 对应当前轮的编号为ans[i]的人
ans[0]=0;
ans[i]=(ans[i-1]+m-1)%(n-i+1); (i>1 , 总人数n=2k 则n-i为第i轮剩余的人数)
*/

int main(void){
	int k, m;
	int Joseph[14] = { 0 };//保存各个k值对应的m值
	while (cin >> k && k)
	{
		int n = 2 * k;
		if (Joseph[k])
		{
			cout << Joseph[k] << endl;
			continue;
		}
		int ans[30] = { 0 };//第i轮杀掉对应标号为ans[i]的人，每一轮都以报数为1的人重新开始编号
		int m = 1;
		for (int i = 1; i <= k; i++)
		{
			ans[i] = (ans[i - 1] + m - 1) % (n - i + 1);
			if (ans[i] < k)
			{
				i = 0;
				m++;
			}
		}
		Joseph[k] = m;
		cout << m << endl;


	}
	return 0;
}