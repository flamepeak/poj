/*
10:素数对
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
两个相差为2的素数称为素数对，如5和7，17和19等，本题目要求找出所有两个数均不大于n的素数对。

输入
一个正整数n。1 <= n <= 10000。
输出
所有小于等于n的素数对。每对素数对输出一行，中间用单个空格隔开。若没有找到任何素数对，输出empty。

*/

#include <bits/stdc++.h>

using namespace std;

int A[10005];

bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    bool flag = false;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            A[cnt++]=i;
    }
    for(int i=1;i<cnt;i++)
    {
        if(A[i]-A[i-1]==2)
        {
            flag = true;
            cout<<A[i-1]<<" "<<A[i]<<endl;
        }
    }
    if(!flag)
        cout<<"empty";

    return 0;
}
