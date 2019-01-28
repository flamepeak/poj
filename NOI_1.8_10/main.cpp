/*
10:矩阵转置
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个n行m列的矩阵A，输出它的转置AT。

输入
第一行包含两个整数n和m，表示矩阵A的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示矩阵A的元素。相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。
输出
m行，每行n个整数，为矩阵A的转置。相邻两个整数之间用单个空格隔开。
*/

#include <iostream>

#define N 105

using namespace std;

int matrix[N][N];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
