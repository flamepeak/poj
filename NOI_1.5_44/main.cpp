/*
44:第n小的质数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个正整数n，求第n小的质数。

输入
一个不超过10000的正整数n。
输出
第n小的质数。

*/

#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >>n;
    int Count=1, val=3;
    if(n==1)
    {
        cout<<2;
        return 0;
    }
    while(1)
    {
        if(IsPrime(val))
            Count++;
        if(Count==n)
        {
            cout<<val;
            return 0;
        }
        val++;
    }
}

/*
int main()
{
    int n,s=1,ans=3;
    cin>>n;
    if(n==1){cout<<2<<endl;return 0;}
    while(1)
    {
        bool bk=true;
        for(int j=2;j<=sqrt(ans);j++)
            if(ans%j==0)
                bk=false;
            if(bk==true)
            {
                s++;
                if(s==n)
                    {cout<<ans<<endl;return 0;}
            }
        ans++;
    }
return 0;
}
*/
