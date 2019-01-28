/*
25:最长最短单词
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入1行句子（不多于200个单词，每个单词长度不超过100），只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。

试输出第1个最长的单词和第1个最短单词。

输入
一行句子。
输出
两行输出：
第1行，第一个最长的单词。
第2行，第一个最短的单词。

*/

#include <iostream>

using namespace std;


int main()
{
    string maxStr, minStr, str;
    int maxLen=0, minLen=100, len;//必须从0开始
    while(cin>>str)
    {
        len = str.size();
        if(len>maxLen)
        {
            maxLen = len;
            maxStr = str;
        }
        if(len<minLen)
        {
            minLen = len;
            minStr = str;
        }
    }
    cout<<maxStr<<endl<<minStr;

    return 0;
}



/* OK
string str[205];
int N;

int main()
{
    int val, Max=0, Min=100;
    bool Maxflag = false, MinFlag=false;
    while(cin>>str[N++]);
    for(int i=0;i<N-1;i++)
    {
        if(str[i].find(',') != string::npos)
            val = str[i].size()-1;
        else
            val = str[i].size();

        if(val>Max)
            Max = val;
        if(val<Min)
            Min = val;
    }
    for(int i=0;i<N;i++)
    {
        if(str[i].find(',') != string::npos)
            val = str[i].size()-1;
        else
            val = str[i].size();

        if(val==Max&&Maxflag!=true)
        {
            Max = i;
            Maxflag=true;
        }
        if(val==Min&&MinFlag!=true)
        {
            Min = i;
            MinFlag=true;
        }
    }
    cout<<str[Max]<<endl<<str[Min];

    return 0;
}

*/
