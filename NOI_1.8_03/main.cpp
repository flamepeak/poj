/*
03:计算矩阵边缘元素之和
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。

输入
第一行分别为矩阵的行数m和列数n（m < 100，n < 100），两者之间以一个空格分开。
接下来输入的m行数据中，每行包含n个整数，整数之间以一个空格分开。
输出
输出对应矩阵的边缘元素和

*/

#include <iostream>

using namespace std;

int matrix[105][105];

int main()
{
    int m, n, sum=0;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==m-1 || j==0 ||j==n-1)
                sum += matrix[i][j];
        }
    }
    cout<<sum;

    return 0;
}
