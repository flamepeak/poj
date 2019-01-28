/*

15:细菌的繁殖与扩散
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在边长为9的正方形培养皿中，正中心位置有m个细菌。假设细菌的寿命仅一天，但每天可繁殖10个后代，而且这10个后代，有两个分布在原来的单元格中，其余的均匀分布在其四周相邻的八个单元格中。求经过n(1≤n≤4)天后，细菌在培养皿中的分布情况。

输入
输入为两个整数，第一个整数m表示中心位置细菌的个数（2 ≤ m ≤ 30），第二个整数n表示经过的天数（1 ≤ n ≤ 4）。
输出
输出九行九列整数矩阵，每行的整数之间用空格分隔。整个矩阵代表n天后细菌在培养皿上的分布情况。

*/

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define N 9

using namespace std;

int A[10][10], B[10][10];

int main()
{
    int m, n;
    cin>>m>>n;
    A[N/2][N/2] = m;
    B[N/2][N/2] = m;
    //copy(A, A+sizeof(A)/sizeof(int), B);
    while(n--)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                B[i][j] *= 2;
                if(i-1>=0&&j-1>=0&&A[i-1][j-1]>0)
                    B[i][j] += A[i-1][j-1]*1;
                if(i-1>=0&&A[i-1][j]>0)
                    B[i][j] += A[i-1][j]*1;
                if(i-1>=0&&j+1<=N-1&&A[i-1][j+1]>0)
                    B[i][j] += A[i-1][j+1]*1;
                if(j-1>=0&&A[i][j-1]>0)
                    B[i][j] += A[i][j-1]*1;
                if(j+1<=N-1&&A[i][j+1]>0)
                    B[i][j] += A[i][j+1]*1;
                if(i+1<=N-1&&j-1>=0&&A[i+1][j-1]>0)
                    B[i][j] += A[i+1][j-1]*1;
                if(i+1<=N-1&&A[i+1][j]>0)
                    B[i][j] += A[i+1][j]*1;
                if(i+1<=N-1&&j+1<=N-1&&A[i+1][j+1]>0)
                    B[i][j] += A[i+1][j+1]*1;
            }
        }

        //B复制给A
        //copy(B, B+sizeof(B)/sizeof(int), A);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                A[i][j]=B[i][j];
            }
        }
    }
    //output
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



/* OK
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    int a[11][11]= {},b[11][11]={};
    //定义两个数组，初始为0，（外围一定要扩充一圈）
    //a数组为繁殖后，b数组为繁殖前，防止循环中繁殖后数据覆盖其他格初始值。
    cin>>m>>n;
    b[5][5]=m;//初始值，正中心位置有m个细菌
    for (int d=1; d<=n; d++)
    {
        //繁殖天数循环
        for (int i=1;i<=9; i++)
        {
            for (int j=1; j<=9; j++)
            {
                //繁殖循环，自留*两个+周围格*8再平均/8就是等于周围格自身初始数据。
                a[i][j]=b[i][j]*2+b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
            }
        }
        for (int i=1;i<=9;i++)
        {
            for (int j=1;j<=9;j++)
            {
                b[i][j]=a[i][j];
                //经过一天繁殖后，改写第二天繁殖前数据b。
            }
        }
    }

    for (int i=1;i<=9;i++)
    {
        for (int j=1;j<=9;j++)
        {
            cout<<a[i][j]<<" ";//输出a数组
        }
        cout<<"\n";
    }
    return 0;
}


*/
