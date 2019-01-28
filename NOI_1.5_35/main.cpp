/*
35:求出e的值
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。
输入
输入只有一行，该行包含一个整数n（2<=n<=15），表示计算e时累加到1/n！。
输出
输出只有一行，该行包含计算出来的e的值，要求打印小数点后10位。
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >>n;
    double sum=1.0, temp=1.0;
    for(int i=1;i<=n;i++)
    {
        temp *= i;
        sum += 1.0/temp;
    }
    printf("%.10lf", sum);
    return 0;
}
