/*
02:奇数单增序列
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个长度为N（不大于500）的正整数序列，请将其中的所有奇数取出，并按升序输出。

输入
共2行：
第1行为 N；
第2行为 N 个正整数，其间用空格间隔。
输出
增序输出的奇数序列，数据之间以逗号间隔。数据保证至少有一个奇数。

*/

#include <iostream>
#include <algorithm>

using namespace std;

int A[505];

int main()
{
    int N, temp, len=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>temp;
        if(temp%2!=0)
            A[len++] = temp;
    }
    sort(A,A+len);
    for(int j=0;j<=len-2;j++)
    {
        cout<<A[j]<<",";
    }
    cout<<A[len-1];
    return 0;
}
