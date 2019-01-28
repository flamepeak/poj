/*
04:求整数的和与均值
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
读入n（1 <= n <= 10000）个整数，求它们的和与均值。

输入
输入第一行是一个整数n，表示有n个整数。
第2~n+1行每行包含1个整数。每个整数的绝对值均不超过10000。
输出
输出一行，先输出和，再输出平均值（保留到小数点后5位），两个数间用单个空格分隔。
*/


#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int temp;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum += temp;
    }
    printf("%lld %.5lf", sum, double(sum)/n);
    return 0;
}
