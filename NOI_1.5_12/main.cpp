/*
12:与指定数字相同的数的个数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输出一个整数序列中与指定数字相同的数的个数。

输入
输入包含2行：
第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字， 中间用一个空格分开；
第2行为N个整数，整数之间以一个空格分开。
输出
输出为N个数中与m相同的数的个数。
*/

#include <iostream>

using namespace std;

int main()
{
    int N,m, temp;
    int Count=0;
    cin>>N>>m;
    while(N--)
    {
        cin >>temp;
        if(temp==m)
            Count++;
    }
    cout<<Count;
    return 0;
}
