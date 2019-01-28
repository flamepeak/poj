/*
04:错误探测
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定n*n由0和1组成的矩阵，如果矩阵的每一行和每一列的1的数量都是偶数，则认为符合条件。
你的任务就是检测矩阵是否符合条件，或者在仅改变一个矩阵元素的情况下能否符合条件。
"改变矩阵元素"的操作定义为0变成1或者1变成0。

输入
输入n + 1行，第1行为矩阵的大小n(0 < n < 100)，以下n行为矩阵的每一行的元素，元素之间以一个空格分开。
输出
如果矩阵符合条件，则输出OK；
如果矩阵仅改变一个矩阵元素就能符合条件，则输出需要改变的元素所在的行号和列号，以一个空格分开。
如果不符合以上两条，输出Corrupt。

*/

#include <iostream>

using namespace std;

int matrix[100][100];

int main()
{
    int n, cnth=0, cntl=0,tempSum=0,htag,ltag;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
            tempSum += matrix[i][j];
        }
        if(tempSum % 2==1)
        {
            cnth++;
            htag = i;
        }
        tempSum = 0;
    }
    if(cnth>=2)
    {
        cout<<"Corrupt";
        return 0;
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
            tempSum += matrix[i][j];
        if(tempSum % 2==1)
        {
            cntl++;
            ltag = j;
        }
        tempSum = 0;
    }
    if(cntl>=2)
    {
        cout<<"Corrupt";
        return 0;
    }
    if(cnth==0&&cntl==0)
    {
        cout<<"OK";
    }
    else
    {
        cout<<htag+1<<" "<<ltag+1;
    }


    return 0;
}
