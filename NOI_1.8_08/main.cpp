/*
08:矩阵加法
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入两个n行m列的矩阵A和B，输出它们的和A+B。

输入
第一行包含两个整数n和m，表示矩阵的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示矩阵A的元素。
接下来n行，每行m个整数，表示矩阵B的元素。
相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。
输出
n行，每行m个整数，表示矩阵加法的结果。相邻两个整数之间用单个空格隔开。
*/

#include <iostream>

using namespace std;

int m1[105][105], m2[105][105];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>m2[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<m1[i][j]+m2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
