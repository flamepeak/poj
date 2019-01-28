/*
13:整数去重
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定含有n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的数，只保留该数第一次出现的位置，删除其余位置。

输入
输入包含两行：
第一行包含一个正整数n（1 <= n <= 20000），表示第二行序列中数字的个数；
第二行包含n个整数，整数之间以一个空格分开。每个整数大于等于10、小于等于100。
输出
输出只有一行，按照输入的顺序输出其中不重复的数字，整数之间用一个空格分开。

*/

#include <iostream>

using namespace std;

int A[100];

int main()
{
    int n, val;
    cin>>n;
    int index=0;
    bool flag;
    while(n--)
    {
        cin>>val;
        flag = false;
        for(int j=0;j<index;j++)
        {
            if(A[j]==val)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            A[index++] = val;
    }
    for(int i=0;i<index;i++)
        cout<<A[i]<<" ";
    return 0;
}
