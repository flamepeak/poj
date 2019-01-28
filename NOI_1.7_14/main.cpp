/*
14:大小写字母互换
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
把一个字符串中所有出现的大写字母都替换成小写字母，同时把小写字母替换成大写字母。

输入
输入一行：待互换的字符串。
输出
输出一行：完成互换的字符串（字符串长度小于80）。
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
            str[i] = str[i]-'a'+'A';
        else if(str[i]>='A'&&str[i]<='Z')
            str[i] = str[i]+'a'-'A';
        cout<<str[i];
    }
    return 0;
}
