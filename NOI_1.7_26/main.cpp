/*
26:字符串最大跨距
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
有三个字符串S,S1,S2，其中，S长度不超过300，S1和S2的长度不超过10。想检测S1和S2是否同时在S中出现，且S1位于S2的左边，并在S中互不交叉（即，S1的右边界点在S2的左边界点的左侧）。计算满足上述条件的最大跨距（即，最大间隔距离：最右边的S2的起始点与最左边的S1的终止点之间的字符数目）。如果没有满足条件的S1，S2存在，则输出-1。

例如，S = "abcd123ab888efghij45ef67kl", S1="ab", S2="ef"，其中，S1在S中出现了2次，S2也在S中出现了2次，最大跨距为：18。

输入
三个串：S1, S2, S3，其间以逗号间隔（注意，S1, S2, S3中均不含逗号和空格）；
输出
S1和S2在S最大跨距；若在S中没有满足条件的S1和S2，则输出-1。

*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str, s1, s2;
    getline(cin,str,',');
    getline(cin,s1,',');
    getline(cin,s2);
    int left = str.find(s1);  //不知道为什么不能用string::size_type, 会出错
    if(left==-1)
    {
        cout<<"-1";
        return 0;
    }
    int right = str.rfind(s2);
    if(right == -1)
    {
        cout<<"-1";
        return 0;
    }
    int s1Len =s1.size();
    if(right>left&&right-left-s1Len>=0)
    {
        cout<<right-left-s1Len;
    }
    else
        cout<<"-1";
    return 0;
}
