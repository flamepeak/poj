/*
17:字符串判等
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
判断两个由大小写字母和空格组成的字符串在忽略大小写，且忽略空格后是否相等。

输入
两行，每行包含一个字符串。
输出
若两个字符串相等，输出YES，否则输出NO。
*/

#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int i=0, j=0;
    while(i<str1.size() || j<str2.size())
    {
        if(str1[i]==' ')
        {
            i++;
            continue;
        }
        if(str2[j]==' ')
        {
            j++;
            continue;
        }
        if(tolower(str1[i]) != tolower(str2[j]))
        {
            cout<<"NO";
            return 0;
        }
        i++;
        j++;
    }
    if((i==str1.size()&&j!=str2.size())||(i!=str1.size()&&j==str2.size()))
        cout<<"NO";
    cout<<"YES";

    return 0;
}
