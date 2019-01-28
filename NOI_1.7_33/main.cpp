/*
33:判断字符串是否为回文
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一个字符串，输出该字符串是否回文。回文是指顺读和倒读都一样的字符串。

输入
输入为一行字符串（字符串中没有空白字符，字符串长度不超过100）。
输出
如果字符串是回文，输出yes；否则，输出no。

*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.size();
    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len-1-i])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";

    return 0;
}
