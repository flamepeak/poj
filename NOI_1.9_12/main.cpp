/*
12:最长平台
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
已知一个已经从小到大排序的数组，这个数组的一个平台（Plateau）就是连续的一串值相同的元素，并且这一串元素不能再延伸。例如，在 1，2，2，3，3，3，4，5，5，6中1，2-2，3-3-3，4，5-5，6都是平台。试编写一个程序，接收一个数组，把这个数组最长的平台找出 来。在上面的例子中3-3-3就是最长的平台。

输入
第一行有一个整数n(n <= 1000)，为数组元素的个数。第二行有n个整数，整数之间以一个空格分开。
输出
输出最长平台的长度。

*/

#include <iostream>

using namespace std;

int A[1005];

int main()
{
    int n;
    int num, Max=0, cnt=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
            cnt++;
        else
            cnt=1;
        if(cnt>Max)
        {
            Max = cnt;
        }
    }
    cout<<Max;

    return 0;
}
