/*
43:质因数分解
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数。

输入
输入只有一行，包含一个正整数 n。

对于60%的数据，6 ≤ n ≤ 1000。
对于100%的数据，6 ≤ n ≤ 2*10^9。
输出
输出只有一行，包含一个正整数 p，即较大的那个质数。

*/

#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            cout<<n/i;
            return 0;
        }
    }
    return 0;
}
