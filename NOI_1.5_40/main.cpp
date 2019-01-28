/*
40:数1的个数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个十进制正整数n，写下从1到n的所有整数，然后数一下其中出现的数字“1”的个数。

例如当n=2时，写下1,2。这样只出现了1个“1”；当n=12时，写下1，2，3，4，5，6，7，8，9，10，11，12。这样出现了5个“1”。

输入
正整数n。1 <= n <= 10000。
输出
一个正整数，即“1”的个数。
*/

#include <iostream>

using namespace std;

int main()
{
    int n, Count=0, num;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        num = i;
        while(num>0)
        {
            if(num%10==1)
                Count++;
            num /= 10;
        }
    }
    cout<<Count;
    return 0;
}
