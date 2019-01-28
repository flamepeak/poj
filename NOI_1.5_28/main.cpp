/*
28:分离整数的各个数位
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个整数，要求从个位开始分离出它的每一位数字。

输入
输入一个整数，整数在1到100000000之间。
输出
从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开。
*/

#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >>n;
    int i=0;
    while(n/10>0)
    {
        cout<<n%10<<" ";
        n /= 10;
    }
    cout <<n;
    return 0;
}
