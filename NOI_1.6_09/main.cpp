/*
09:向量点积计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在线性代数、计算几何中，向量点积是一种十分重要的运算。

给定两个n维向量a=(a1,a2,...,an)和b=(b1,b2,...,bn)，求点积a·b=a1b1+a2b2+...+anbn。

输入
第一行是一个整数n。1 <= n <= 1000。
第二行包含n个整数a1,a2,...,an。
第三行包含n个整数b1,b2,...,bn。
相邻整数之间用单个空格隔开。每个整数的绝对值都不超过1000。
输出
一个整数，即两个向量的点积结果。
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    long int sum=0;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
    for(int i=0;i<n;i++)
        sum += A[i]*B[i];
    cout<<sum;
    return 0;
}
