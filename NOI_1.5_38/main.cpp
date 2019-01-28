/*
38:计算多项式的导函数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
计算多项式的导函数是一件非常容易的任务。给定一个函数f(x)，我们用f'(x)来表示其导函数。我们用x^n来表示x的n次幂。为了计算多项式的导函数，你必须知道三条规则：

(1)、(C)' = 0 如果C是常量

(2)、(C*x^n)' = C*n*x^(n-1) 如果n >= 1且C是常量

(3)、(f1(x)+f2(2))' = f1'(x)+f2'(x)

容易证明，多项式的导函数也是多项式。

现在，请你编写一个程序，给定一个不包含负系数且已合并好同幂次项的多项式f(x)，计算出它的导函数。

输入
输入有两行。
第一行是一个整数n（0 <= n <= 100）表明多项式的最高次幂为n。
第二行包含n+1个非负整数，Cn ，Cn-1 ，Cn-2 ，Cn-3 ，Cn-4 ，… ，C1，C0（0 <= Ci <= 1000）且Cn != 0。Ci是幂次为i的项的系数。
输出
在一行内输出f'(x)的结果。
（1） 如果g(x) = 0那么直接输出0
（2） 如果g(x)形如Cm(x^m)+Cm-1(x^(m-1))+…+C0(Cm!=0)那么输出Cm…C0
（3） 相邻整数之间有单个空格。
*/

#include <iostream>

using namespace std;

int main()
{
    int n, c,c0;
    cin>>n;
    if(n==0)
    {
        cin>>c0;
        cout<<0;
        return 0;
    }
    for(int i=n;i>1;i--)
    {
        cin>>c;
        cout<<c*i<<" ";
    }
    cin>>c;
    cout<<c;
    cin>>c0;
    return 0;
}

/*
int main()
{
    int t, n, c,c0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cin>>c0;
            cout<<0<<endl;
            continue;
        }
        for(int i=n;i>1;i--)
        {
            cin>>c;
            cout<<c*i<<" ";
        }
        cin>>c;
        cout<<c<<endl;
        cin>>c0;
    }
    return 0;
}

*/



