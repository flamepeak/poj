/*
18:验证子串
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入两个字符串，验证其中一个串是否为另一个串的子串。

输入
输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
输出
若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2)
否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1)
否则，输出 No substring。

*/

#include <bits/stdc++.h>

using namespace std;

bool judgeSubStr(string s1, string s2) //判断s1是否为s2子串
{
    int j;
    int len = s2.size()-s1.size();
    for(int i=0;i<=len;i++)  //此处必须有等号
    {
        if(s1[0]==s2[i])
        {
            for(j=1;j<s1.size();j++)
            {
                if(s1[j]!=s2[i+j])
                    break;
            }
            if(j==s1.size())
                return true;
        }
    }
    return false;
}

int main()
{
    string str1, str2;
    cin>>str1>>str2;
    if(judgeSubStr(str1, str2))
        cout<<str1<<" is substring of "<<str2;
    else if(judgeSubStr(str2,str1))
        cout<<str2<<" is substring of "<<str1;
    else
        cout<<"No substring";

    return 0;
}
