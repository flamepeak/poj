/*
01:矩阵交换行
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个5*5的矩阵（数学上，一个r×c的矩阵是一个由r行c列元素排列成的矩形阵列），将第n行和第m行交换，输出交换后的结果。

输入
输入共6行，前5行为矩阵的每一行元素,元素与元素之间以一个空格分开。
第6行包含两个整数m、n，以一个空格分开。（1 <= m,n <= 5）
输出
输出交换之后的矩阵，矩阵的每一行元素占一行，元素之间以一个空格分开。

*/

#include <iostream>

using namespace std;

int matrix[5][5];
int m, n, temp;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cin >>m>>n;
    for(int i=0;i<5;i++)
    {
        temp = matrix[m-1][i];
        matrix[m-1][i] = matrix[n-1][i];
        matrix[n-1][i] = temp;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
