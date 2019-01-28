/*
27:单词翻转
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个句子（一行），将句子中的每一个单词翻转后输出。

输入
只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
输出
翻转每一个单词后的字符串，单词之间的空格需与原文一致。
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[505];
    gets(s);
    int cnt = 0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=i-1;j>=cnt;j--)
                cout<<s[j];
            cout<<" ";
            cnt = i+1;
        }
    }

    return 0;
}




/* OK
void reverseStr(string str, int start, int ends)
{
    for(int i=ends;i>=start;i--)
    {
        cout<<str[i];
    }
}

 //空格数可能不止一个
int main()
{
    string str;
    int start=0, ends=0;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            ends = i-1;
            reverseStr(str, start,ends);
            cout<<" ";
            start = i+1;
        }
        if(i==str.size()-1)
        {
            reverseStr(str, start,str.size()-1);
        }
    }

    return 0;
}

*/


 /*错误： 空格数可能不止一个
int main()
{
    while(cin>>str[N])
    {
        if(str[N][0]=='\n' || str[N][0]=='\0'||str[N].size()==0)
            break;
        for(int j=str[N].size()-1;j>=0;j--)
        {
            cout<<str[N][j];
        }
        cout<<" ";
        N++;
    }

    return 0;
}
*/
