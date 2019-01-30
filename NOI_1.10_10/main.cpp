/*
10:单词排序
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一行单词序列，相邻单词之间由1个或多个空格间隔，请按照字典序输出这些单词，要求重复的单词只输出一次。（区分大小写）

输入
一行单词序列，最少1个单词，最多100个单词，每个单词长度不超过50，单词之间用至少1个空格间隔。数据不含除字母、空格外的其他字符。
输出
按字典序输出这些单词，重复的单词只输出一次。

*/


#include<bits/stdc++.h>
using namespace std;
int i,n,t,j,k;
string a[101],l;
int main()
{
    while(cin>>l)
    {
        a[++n]=l;
    }
    /*for(i=1; i<=n-1; ++i)
        for(j=i+1; j<=n; ++j)
            if(a[i]>a[j])
                swap(a[i],a[j]);
    */
    sort(a+1,a+n+1);
    for(i=1; i<=n; i++)
        if(a[i-1]!=a[i])
            cout<<a[i]<<endl;
    return 0;
}

/*
#include <iostream>
#include <algorithm>

using namespace std;

string A[105];

int main()
{
    int len=0;
    string str;
    bool flag;
    while(cin>>str)
    {
        flag = false;
        for(int i=0;i<len;i++)
        {
            if(A[i]==str)
            {
                flag = true;
                break;
            }
        }
        if(!flag)
            A[len++] = str;
    }
    sort(A, A+len);
    for(int j=0;j<len;j++)
        cout<<A[j]<<endl;

    return 0;
}

*/
