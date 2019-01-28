/*
09:矩阵乘法
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
计算两个矩阵的乘法。n*m阶的矩阵A乘以m*k阶的矩阵B得到的矩阵C 是n*k阶的，且C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + …… +A[i][m-1]*B[m-1][j](C[i][j]表示C矩阵中第i行第j列元素)。

输入
第一行为n, m, k，表示A矩阵是n行m列，B矩阵是m行k列，n, m, k均小于100
然后先后输入A和B两个矩阵，A矩阵n行m列，B矩阵m行k列，矩阵中每个元素的绝对值不会大于1000。
输出
输出矩阵C，一共n行，每行k个整数，整数之间以一个空格分开。
*/


#include <iostream>

#define N 105

using namespace std;

int m1[N][N], m2[N][N];

int main()
{
    int n, m, k, sum=0;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            cin>>m2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            sum = 0;
            for(int p=0;p<m;p++)
            {
                sum += m1[i][p]*m2[p][j];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}
