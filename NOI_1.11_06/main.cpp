/*
06:月度开销
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
农夫约翰是一个精明的会计师。他意识到自己可能没有足够的钱来维持农场的运转了。他计算出并记录下了接下来 N (1 ≤ N ≤ 100,000) 天里每天需要的开销。

约翰打算为连续的M (1 ≤ M ≤ N) 个财政周期创建预算案，他把一个财政周期命名为fajo月。每个fajo月包含一天或连续的多天，每天被恰好包含在一个fajo月里。

约翰的目标是合理安排每个fajo月包含的天数，使得开销最多的fajo月的开销尽可能少。



输入
第一行包含两个整数N,M，用单个空格隔开。
接下来N行，每行包含一个1到10000之间的整数，按顺序给出接下来N天里每天的开销。
输出
一个整数，即最大月度开销的最小值。

*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int l,r,n,m,mid,a[100010];

bool check(int x)
{
    int now=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        if(now+a[i]>x)
        {
            ans++;
            now=a[i];
        }
        else
            now+=a[i];
    }
    if(ans+1>m)
        return false;
    return true;
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        r+=a[i];
        l=max(l,a[i]);
    }
    while(l<r)
    {
        mid=(l+r)/2;
        if(check(mid))
            r=mid;
        else
            l=mid+1;
    }
    printf("%d",l);
    return 0;
}
