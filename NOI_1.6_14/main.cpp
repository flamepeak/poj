/*
14:求10000以内n的阶乘
查看 提交 统计 提问
总时间限制: 5000ms 内存限制: 655360kB
描述
求10000以内n的阶乘。

输入
只有一行输入，整数n（0<=n<=10000）。
输出
一行，即n!的值。
*/

#include <iostream>

#define N 100000

using namespace std;

int ans[N]={0,1};

int main()
{
    int n, high=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=high+6;j++)
        {
            ans[j] *= i;
        }
        for(int j=1;j<=high+6;j++)
        {
            ans[j+1] = ans[j+1] + ans[j]/10;
            ans[j] = ans[j] %10 ;
        }
        for(int k=high+7;k>=high;k--)
        {
            if(ans[k]!=0)
            {
                high = k;
                break;
            }
        }
    }
    for(int i=high;i>=1;i--)
        cout<<ans[i];
    return 0;
}
