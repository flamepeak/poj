/*
10:大整数加法
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
求两个不超过200位的非负整数的和。

输入
有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
输出
一行，即相加后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。
*/

#include <iostream>
#include <string>

#define N 205

using namespace std;

int a[N],b[N],c[N+1],k,i;

string x,y;

int main()
{
    cin>>x;
    cin>>y;
    int n=x.size(),m=y.size();
    for(i=1;i<=n;i++)
        a[i]=x[n-i]-'0';
    for(i=1;i<=m;i++)
        b[i]=y[m-i]-'0';
    k = (n>=m)?n:m;
    for(i=1;i<=k;i++)
        c[i]=a[i]+b[i];
    for(i=1;i<=k;i++)
    {
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    if(c[k+1]>0)
        k++;
    while(c[k]==0&&k>1)
        k--;
    for(i=k;i>=1;i--)
        cout<<c[i];
    return 0;
}
