/*
29:数字反转
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。

输入
输入共 1 行，一个整数N。

-1,000,000,000 ≤ N≤ 1,000,000,000。
输出
输出共 1 行，一个整数，表示反转后的新数。
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n;
    cin >>n;
    int i=0;
    if(n<0)
    {
        cout<<"-";
        n = abs(n);
    }
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    while(n%10 == 0)
    {
        n /= 10;
    }
    while(n/1>0)
    {
        cout<<n%10;
        n /= 10;
    }
    return 0;
}
