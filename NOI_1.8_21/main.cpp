/*
21:二维数组右上左下遍历
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。



输入
输入的第一行上有两个整数，依次为row和col。
余下有row行，每行包含col个整数，构成一个二维整数数组。
（注：输入的row和col保证0 < row < 100, 0 < col < 100）
输出
按遍历顺序输出每个整数。每个整数占一行。
*/



/*
主要思路：
考虑斜率
左上三角形：X+Y=k(k=0,1,...,col-1),Y=0,1,...,k
右下三角形：X+Y=col-1+k(k=1,2,...,row-1),X=col-1,col-2,...,col-row+k

*/
#include <iostream>

using namespace std;

int A[105][105];

int main()
{
    int row, col;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int k=0;k<col;k++)
    {
        for(int y=0;y<=k&&y<row;y++)
        {
            cout<<A[y][k-y]<<endl;
        }
    }
    for(int k=1;k<=row-1;k++) //x+y=col-1+k
    {
        for(int x=col-1; x>=col-row+k&&x>=0;x--)
        {
            cout<<A[col+k-1-x][x]<<endl;
        }
    }

    return 0;
}
