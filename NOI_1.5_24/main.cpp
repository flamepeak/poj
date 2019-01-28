/*
24:正常血压
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

输入
第一行为一个正整数n，n < 100
其后有n行，每行2个正整数，分别为一次测量的收缩压和舒张压，中间以一个空格分隔。
输出
输出仅一行，血压连续正常的最长小时数。

*/

#include <iostream>

using namespace std;

int main()
{
    int n, x, y, Count=0, Max=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if((x>=90&&x<=140)&&(y>=60&&y<=90))
        {
            Count++;
            if(Max<Count)
                Max = Count;
        }
        else
        {
            Count = 0;
        }
    }
    cout<<Max;
    return 0;
}
