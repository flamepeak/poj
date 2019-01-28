/*
13:图像模糊处理
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：

1. 四周最外侧的像素点灰度值不变；

2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。

输入
第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1 <= n <= 100，1 <= m <= 100。
接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在0~255之间。
输出
n行，每行m个整数，为模糊处理后的图像。相邻两个整数之间用单个空格隔开。


*/

#include <iostream>
#include <cmath>

using namespace std;

int matrix[105][105];

int main()
{
    int n, m, temp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==m-1)
            {
                cout <<matrix[i][j]<<" ";
            }
            else
            {
                temp = matrix[i][j] + matrix[i-1][j]+matrix[i+1][j]+matrix[i][j-1]+matrix[i][j+1];
                temp = round(temp/5.0);
                cout<<temp<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*

include<bits/stdc++.h>//全部头文件之和的头文件

using namespace std;

int A[105][105],B[105][105];//定义两个数组

int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);//输入行列，n为行，m为列
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);//两重循环进行输入数组
            B[i][j]=A[i][j];//赋值备用数组
        }
    for (i = 1; i < n-1; i++)
    {
        for (j = 1; j < m-1; j++)
            B[i][j] =round((A[i - 1][j] + A[i + 1][j] + A[i][j]+ A[i][j - 1] + A[i][j + 1])*1.0 / 5);//上面的数+下面的数+中间的数+左边的数+右边的数取平均数
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ",B[i][j]);//输出该数组
        printf("\n");//换行，警告！请勿直接printf("%d \n",B[i][j])进行换行！可以尝试，后果自负.
    }
    return 0;//返回0值
}
*/
