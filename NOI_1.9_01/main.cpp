/*
01:查找特定的值
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在一个序列（下标从1开始）中查找一个给定的值，输出第一次出现的位置。

输入
第一行包含一个正整数n，表示序列中元素个数。1 <= n <= 10000。
第二行包含n个整数，依次给出序列的每个元素，相邻两个整数之间用单个空格隔开。元素的绝对值不超过10000。
第三行包含一个整数x，为需要查找的特定值。x的绝对值不超过10000。
输出
若序列中存在x，输出x第一次出现的下标；否则输出-1。

*/


#include <iostream>

using namespace std;

int A[10005];

int main()
{
    int n, val;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>val;
    for(int i=0;i<n;i++)
    {
        if(val==A[i])
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}
