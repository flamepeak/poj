/*
25:求特殊自然数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。

输入
无。
输出
三行：
第一行是此自然数的十进制表示；
第一行是此自然数的七进制表示；
第一行是此自然数的九进制表示。
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c; //abc7  cba9   40*c-24*a=b
    for(a=1;a<=7;a++)
        for(c=1;c<=7;c++)
        {
            b = 24*a-40*c;
            if(b>=0&&b<=7)
            {
                cout<<49*a+7*b+c<<endl;
                cout<<a<<b<<c<<endl;
                cout<<c<<b<<a;
                return 0;
            }
        }

    return 0;
}
