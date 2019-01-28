/*
06:合法 C 标识符
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号（注：题目保证这些字符串一定不是C语言的保留字）。

C语言标识符要求：

1. 非保留字；

2. 只包含字母、数字及下划线（“_”）。

3. 不以数字开头。

输入
一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。
输出
一行，如果它是C语言的合法标识符，则输出yes，否则输出no。
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    if(!(((str[0]>='a')&&str[0]<='z') || (str[0]>='A'&&str[0]<='Z') || str[0]=='_'))
    {
        cout<<"no";
        return 0;
    }
    for(int i=1;i<str.size();i++)
    {
        if(!(((str[i]>='a')&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') || (str[i]>='0'&&str[i]<='9') || str[i]=='_'))
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}
