/*
12:计算2的N次方
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
任意给定一个正整数N(N<=100)，计算2的n次方的值。
输入
输入一个正整数N。
输出
输出2的N次方的值
*/

#include <iostream>

using namespace std;

int ans[1000]={0,1};

int main()
{
    int N, high=1;
    cin >>N;
    for(int i=0;i<N;i++)
    {
        for(int j=1;j<=high;j++)
        {
            ans[j] = ans[j]*2;
        }
        for(int j=1;j<=high;j++)
        {
            ans[j+1] = ans[j+1] + ans[j]/10;
            ans[j] = ans[j]%10;
        }
        if(ans[high+1]==1)
        {
            high++;
        }
    }
    for(int i=high;i>=1;i--)
        cout<<ans[i];
    return 0;
}
