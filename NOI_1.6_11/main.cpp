/*
11:大整数减法
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
求两个大的正整数相减的差。

输入
共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
输出
一行，即所求的差。
*/

#include <iostream>
#include <string>

#define N 205

using namespace std;

int a[N],b[N],c[N];
string x, y;
int i;

int main()
{
    cin>>x>>y;
    int n=x.size(), m=y.size();
    for(i=1;i<=n;i++)
        a[i] = x[n-i] - '0';
    for(i=1;i<=m;i++)
        b[i] = y[m-i] - '0';
    for(i=1;i<=n;i++)
        c[i] = a[i]-b[i];
    for(i=1;i<n;i++)
    {
        while(c[i]<0)
        {
            c[i] = 10 + c[i];
            c[i+1]--;
        }
    }
    while(c[n]==0 && n>1)
        m--;
    for(i=n;i>=1;i--)
        cout<<c[i];
    return 0;
}
