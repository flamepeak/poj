/*
24:蛇形填充数组
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
用数字1,2,3,4,...,n*n这n2个数蛇形填充规模为n*n的方阵。

蛇形填充方法为：

对于每一条左下-右上的斜线，从左上到右下依次编号1,2,...,2n-1；按编号从小到大的顺序，将数字从小到大填入各条斜线，其中编号为奇数的从左下向右上填写，编号为偶数的从右上到左下填写。

比如n=4时，方阵填充为如下形式：

1  2  6  7
3  5  8  13
4  9  12 14
10 11 15 16
输入
输入一个不大于10的正整数n，表示方阵的行数。
输出
输出该方阵，相邻两个元素之间用单个空格间隔。
*/


#include <iostream>

using namespace std;

int A[15][15], cnt=1, temp;

int main()
{
    int n;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        if(k%2==0)
        {
            for(int x=1;x<=k&&k+1-x<=n;x++)
            {
                A[x][k+1-x] = cnt++;
            }
        }
        else
        {
            for(int x=k;x>=1&&k+1-x<=n;x--)
            {
                A[x][k+1-x] = cnt++;
            }
        }
    }
    for(int k=n+1;k<=2*n-1;k++)
    {
        if(k%2==0)
        {
            temp = k-(n)+1;
            for(int x=temp;x<=n;x++)
            {
                A[x][temp+n-x] = cnt++;
            }
        }
        else
        {
            temp = k-(n)+1;
            for(int x=n;x>=temp;x--)
            {
                A[x][temp+n-x] = cnt++;
            }
        }
    }


    //output
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
