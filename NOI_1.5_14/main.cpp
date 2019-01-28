/*
14:人口增长问题
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？

输入
一行，包含两个整数x和n，分别是人口基数和年数，以单个空格分隔。
输出
输出最后的人口数，以亿为单位，保留到小数点后四位。1 <= x <= 100, 1 <= n <= 100。
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    double x;
    cin>>x>>n;
    for(int i=0;i<n;i++)
    {
        x *= 1.001;
    }
    printf("%.4lf", x);
    return 0;
}
