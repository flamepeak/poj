/*
01:统计数字字符个数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入一行字符，统计出其中数字字符的个数。

输入
一行字符串，总长度不超过255。
输出
输出为1行，输出字符串里面数字字符的个数。

*/

#include <iostream>

using namespace std;

int main()
{
    int Count = 0;
    char ch;
    while(cin.get(ch) && ch!='\n')
    {
        if(isdigit(ch))
            Count++;
    }
    cout<<Count;

    return 0;
}
