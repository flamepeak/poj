/*
08:多边形内角和
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在欧几里德几何中，n边形的内角和是(n-2)*180°。已知其中(n-1)个内角的度数，就能计算出剩下的一个未知内角的度数。请编写一个程序，来解决这个问题。

输入
第1行只有一个整数n(2第2行有(n-1)个正整数，是每个已知内角的度数。相邻两个整数之间用单个空格隔开。
数据保证给定多边形合法。
输出
一个正整数，为未知内角的度数。

*/


#include <iostream>

using namespace std;

int main()
{
    int n, degree;
    cin >>n;
    int sum = (n-2)*180;
    for(int i=0;i<n-1;i++)
    {
        cin>>degree;
        sum -= degree;
    }
    cout <<sum;
    return 0;
}