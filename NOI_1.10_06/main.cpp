/*
06:整数奇偶排序
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定10个整数的序列，要求对其重新排序。排序要求:

1.奇数在前，偶数在后；

2.奇数按从大到小排序；

3.偶数按从小到大排序。

输入
输入一行，包含10个整数，彼此以一个空格分开，每个整数的范围是大于等于0，小于等于100。
输出
按照要求排序后输出一行，包含排序后的10个整数，数与数之间以一个空格分开。
*/



#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b)
{
    return a>b;
}

int A[11];

int main()
{
    int temp, i=0, j=9;
    for(int k=0;k<10;k++)
    {
        cin>>temp;
        if(temp %2 != 0)
            A[i++]=temp;
        else
            A[j--]=temp;
    }
    sort(A, A+i, cmp);
    sort(A+j+1,A+10);
    for(int k=0;k<10;k++)
        cout<<A[k]<<" ";

    return 0;
}
