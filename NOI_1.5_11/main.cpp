/*
11:整数的个数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定k（1
< k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。

输入
输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出
输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
*/

#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    int t1=0, t5=0, t10=0;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        if(temp==1)
            t1++;
        else if(temp==5)
            t5++;
        else if(temp==10)
            t10++;
    }
    cout<<t1<<endl<<t5<<endl<<t10;
    return 0;
}
