/*
13:乘方计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出一个整数a和一个正整数n，求乘方an。

输入
一行，包含两个整数a和n。-1000000 <= a <= 1000000，1 <= n <= 10000。
输出
一个整数，即乘方结果。题目保证最终结果的绝对值不超过1000000。
*/

#include <iostream>

using namespace std;

int main()
{
    long int a, ans=1;
    int n;
    cin>>a>>n;
    for(int i=0;i<n;i++)
        ans *=a;
    cout<<ans;
    return 0;
}
