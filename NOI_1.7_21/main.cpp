/*
21:单词替换
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个字符串，以回车结束（字符串长度<=100）。该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。
输入
输入包括3行，
第1行是包含多个单词的字符串 s;
第2行是待替换的单词a(长度 <= 100);
第3行是a将被替换的单词b(长度 <= 100).

s, a, b 最前面和最后面都没有空格.
输出
输出只有 1 行，将s中所有单词a替换成b之后的字符串。

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string a, b;
    cin>>a>>b;
    int n = a.size();
    for(int i=0;i<str.size();i++)
    {
        if(str.substr(i,n)==a&&(str[i+n]==' ' || i+n==str.size()))
        {
            cout<<b;
            i += n-1;
        }
        else
            cout<<str[i];
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
string s[101];
int a;
int main()
{
    while(cin>>s[++a]);
    for(int i=1;i<a-2;i++)
    {
        if(s[i]==s[a-2])s[i]=s[a-1];
            cout<<s[i]<<" ";
    }
}


*/

