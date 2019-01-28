/*
34:回文子串
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个字符串，输出所有长度至少为2的回文子串。

回文子串即从左往右输出和从右往左输出结果是一样的字符串，比如：abba，cccdeedccc都是回文字符串。

输入
一个字符串，由字母或数字组成。长度500以内。
输出
输出所有的回文子串，每个子串一行。
子串长度小的优先输出，若长度相等，则出现位置靠左的优先输出。

*/

#include <iostream>

using namespace std;

bool judge(string str)
{
    int len = str.size();
    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str, sub;
    getline(cin, str);
    for(int i=2;i<=str.size();i++)
    {
        for(int j=0;j<=str.size()-i;j++) //此处等号必须有
        {
            sub = str.substr(j,i);
            if(judge(sub))
                cout<<sub<<endl;
        }
    }

    return 0;
}
