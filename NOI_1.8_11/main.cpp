/*
11:图像旋转
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个n行m列的黑白图像，将它顺时针旋转90度后输出。

输入
第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在0~255之间。
输出
m行，每行n个整数，为顺时针旋转90度后的图像。相邻两个整数之间用单个空格隔开。
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
        for(int i=n-1;i>=0;i--)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
