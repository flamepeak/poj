/*
09:密码翻译
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。

输入
输入一行，包含一个字符串，长度小于80个字符。
输出
输出每行字符串的加密字符串。

*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++)
    {
        if((str[i]>='a'&&str[i]<'z')||(str[i]>='A'&&str[i]<'Z'))
            str[i] = str[i]+1;
        else if(str[i]=='z' || str[i]=='Z')
            str[i] = str[i]-25;
        cout<<str[i];
    }
    return 0;
}
