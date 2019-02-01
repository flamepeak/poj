/*
05:统计单词数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置，有的还能统计出特定单词在文章中出现的次数。

现在，请你编程实现这一功能，具体要求是：给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。注意：匹配单词时，不区分大小写，但要求完全匹配，即给定单词必须与文章中的某一独立单词在不区分大小写的情况下完全相同（参见样例1），如果给定单词仅是文章中某一单词的一部分则不算匹配（参见样例2）。

输入
2 行。
第 1 行为一个字符串，其中只含字母，表示给定单词；
第 2 行为一个字符串，其中只可能包含字母和空格，表示给定的文章。
输出
只有一行，如果在文章中找到给定单词则输出两个整数，两个整数之间用一个空格隔开，分别是单词在文章中出现的次数和第一次出现的位置（即在文章中第一次出现时，单词首字母在文章中的位置，位置从0开始）；如果单词在文章中没有出现，则直接输出一个整数-1。

*/


#include<iostream>
#include<cstring>
using namespace std;
string s,a;
int t,p=-1;
bool first=true;
int main()
{
    getline(cin,a);
    getline(cin,s);
    for(int i=0;i<a.size();i++)
        a[i]=tolower(a[i]);
    for(int i=0;i<s.size();i++)
        s[i]=tolower(s[i]);
    for(int i=0;i<s.size();i++)
    {
        if(i==0||s[i-1]==' ')
        {
            bool flag=true;
            int k=0;
            for(int j=i;j<i+a.size();j++)
            {
                if(a[k]!=s[j])
                {
                    flag=false;
                    break;
                }
                k++;
            }
            if(s[i+a.size()]!=' ')
                flag=false;
            if(flag)
            {
                t++;
                if(first)
                {
                    p=i;
                    first=false;
                }
                i+=a.size();
            }
        }
    }
    if(p!=-1)
        cout<<t<<' '<<p<<endl;
    else
        cout<<-1<<endl;
    return 0;
}




