/*
13:将字符串中的小写字母转换成大写字母
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个字符串，将其中所有的小写字母转换成大写字母。

输入
输入一行，包含一个字符串（长度不超过100，可能包含空格）。
输出
输出转换后的字符串。
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i] = str[i] -'a' +'A';
        cout <<str[i];
    }

    return 0;
}
