/*
13:大整数的因子
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k。

输入
一个非负整数c，c的位数<=30。
输出
若存在满足 c%k == 0 的k，从小到大输出所有这样的k，相邻两个数之间用单个空格隔开；若没有这样的k，则输出"none"。

*/


#include <iostream>
#include <string>

#define N 35

using namespace std;

int val[N];

int main()
{
    string st;
    cin>>st;
    int len = st.size();
    int temp[len+1], Count=0;
    for(int i=1;i<=len;i++)
        val[i] = st[i-1] - '0';
    for(int k=2;k<=9;k++)
    {
        for(int i=1;i<=len;i++)
            temp[i] = val[i];
        for(int i=1;i<=len-1;i++)
        {
            if(temp[i]%k != 0)
            {
                temp[i+1] += (temp[i]%k)*10;
            }
        }
        if(temp[len]%k==0)
        {
            cout<<k<<" ";
            Count++;
        }
    }
    if(Count==0)
        cout<<"none";
    return 0;
}
