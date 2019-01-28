/*
24:单词的长度
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一行单词序列，相邻单词之间由1个或多个空格间隔，请对应地计算各个单词的长度。

注意，如果有标点符号（如连字符，逗号），标点符号算作与之相连的词的一部分。没有被空格间开的符号串，都算作单词。

输入
一行单词序列，最少1个单词，最多300个单词，单词之间用至少1个空格间隔。单词序列总长度不超过1000。
输出
依次输出对应单词的长度，之间以逗号间隔。

*/

#include <iostream>

using namespace std;

string str[305];
int N;

int main()
{
    while(cin>>str[N++]);
    for(int i=0;i<N-2;i++)
    {
        cout<<str[i].size()<<",";
    }
    cout<<str[N-2].size();
    return 0;
}

/* C
#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

char s[1001];

int main()
{
    scanf("%s",s);
    printf("%d",strlen(s));
    while(scanf("%s",s)==1)
    {
        printf(",%d",strlen(s));
    }
    printf("\n");
    return 0;
}

*/



