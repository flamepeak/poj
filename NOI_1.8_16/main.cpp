/*
16:矩阵剪刀石头布
查看 提交 统计 提问
总时间限制: 5000ms 内存限制: 65536kB
描述
Bart的妹妹Lisa在一个二维矩阵上创造了新的文明。矩阵上每个位置被三种生命形式之一占据：石头，剪刀，布。每天，上下左右相邻的不同生命形式将会发生战斗。在战斗中，石头永远胜剪刀，剪刀永远胜布，布永远胜石头。每一天结束之后，败者的领地将被胜者占领。

你的工作是计算出n天之后矩阵的占据情况。

输入
第一行包含三个正整数r，c，n，分别表示矩阵的行数、列数以及天数。每个整数均不超过100。
接下来r行，每行c个字符，描述矩阵初始时被占据的情况。每个位置上的字符只能是R，S，P三者之一，分别代表石头，剪刀，布。相邻字符之间无空格。
输出
输出n天之后的矩阵占据情况。每个位置上的字符只能是R，S，P三者之一，相邻字符之间无空格。

*/

#include <iostream>

#define N 105

using namespace std;

char A[N][N], B[N][N];

int main()
{
    int r, c, n;
    cin>>r>>c>>n;
    //input
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>A[i][j];
            B[i][j] = A[i][j];
        }
    }

    //
    while(n--)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(A[i][j]=='R')
                {
                    if(i-1>=0&&A[i-1][j]=='S') B[i-1][j]='R';
                    if(j-1>=0&&A[i][j-1]=='S') B[i][j-1]='R';
                    if(i+1<=c-1&&A[i+1][j]=='S') B[i+1][j]='R';
                    if(j+1<=c-1&&A[i][j+1]=='S') B[i][j+1]='R';
                }
                if(A[i][j]=='S')
                {
                    if(i-1>=0&&A[i-1][j]=='P') B[i-1][j]='S';
                    if(j-1>=0&&A[i][j-1]=='P') B[i][j-1]='S';
                    if(i+1<=c-1&&A[i+1][j]=='P') B[i+1][j]='S';
                    if(j+1<=c-1&&A[i][j+1]=='P') B[i][j+1]='S';
                }
                if(A[i][j]=='P')
                {
                    if(i-1>=0&&A[i-1][j]=='R') B[i-1][j]='P';
                    if(j-1>=0&&A[i][j-1]=='R') B[i][j-1]='P';
                    if(i+1<=c-1&&A[i+1][j]=='R') B[i+1][j]='P';
                    if(j+1<=c-1&&A[i][j+1]=='R') B[i][j+1]='P';
                }
            }
        }
        //copyt B to A
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                A[i][j]=B[i][j];
            }
        }
    }

    //output
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}
