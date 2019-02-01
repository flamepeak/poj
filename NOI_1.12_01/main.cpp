/*
01:简单算术表达式求值
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
两位正整数的简单算术运算（只考虑整数运算），算术运算为：

+，加法运算；
-，减法运算；
*，乘法运算；
/，整除运算；
%，取余运算。

算术表达式的格式为（运算符前后可能有空格）：
运算数 运算符 运算数

请输出相应的结果。

输入
一行算术表达式。
输出
整型算数运算的结果（结果值不一定为2位数，可能多于2位或少于2位）。

*/


#include<bits/stdc++.h>
using namespace std;
int cal(int a,int b,char c)
{
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
    if(c=='%') return a%b;
}
int main()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    cout<<cal(a,b,c);
    return 0;
}


/* OK
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    char oper, ch;
    scanf("%d", &a);
    //while(oper=getchar()&&oper==' '){}
    while(scanf("%c",&oper)&&oper==' '){}
    scanf("%d", &b);
    switch(oper)
    {
        case '+': {cout<<a+b;break;}
        case '-': {cout<<a-b;break;}
        case '*': {cout<<a*b;break;}
        case '/': {cout<<a/b;break;}
        case '%': {cout<<a%b;break;}
    }
    return 0;
}
*/
