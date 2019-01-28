/*
20:删除单词后缀
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个单词，如果该单词以er、ly或者ing后缀结尾， 则删除该后缀（题目保证删除后缀后的单词长度不为0）， 否则不进行任何操作。

输入
输入一行，包含一个单词（单词中间没有空格，每个单词最大长度为32）。
输出
输出按照题目要求处理后的单词。

*/


#include <bits/stdc++.h>


using namespace std;

int main()
{
    char str[33];
    cin>>str;
    int len = strlen(str);
    if(str[len-1]=='r'&&str[len-2]=='e')
        str[len-2]='\0';
    if(str[len-1]=='y'&&str[len-2]=='l')
        str[len-2]='\0';
    if(str[len-1]=='g'&&str[len-2]=='n'&&str[len-3]=='i')
        str[len-3]='\0';
    cout<<str;
    return 0;
}

//也可以使用C++ 的substr
