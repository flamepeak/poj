
/*
02:找第一个只出现一次的字符
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

输入
一个字符串，长度小于100000。
输出
输出第一个仅出现一次的字符，若没有则输出no。

*/
#include <iostream>
#include <string>

using namespace std;

int arr[26];

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
        arr[str[i]-'a']++;
    for(int i=0;i<str.size();i++)
    {
        if(arr[str[i]-'a']==1)
        {
            cout<<str[i];
            return 0;
        }
    }
    cout<<"no";
    return 0;
}

/*
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char s[100005];
int c[26];
int main(){
    memset(c,0,sizeof(c));
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        c[s[i]-'a']++;
    }
    for(int i=0;i<len;i++)
    {
        if(c[s[i]-'a']==1)
        {
            printf("%c\n",s[i]);
            return 0;
        }
    }
    cout<<"no"<<endl;
return 0;
}

*/
