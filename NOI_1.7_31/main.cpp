/*31:字符串p型编码
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个完全由数字字符（'0','1','2',…,'9'）构成的字符串str，请写出str的p型编码串。例如：字符串122344111可被描述为"1个1、2个2、1个3、2个4、3个1"，因此我们说122344111的p型编码串为1122132431；类似的道理，编码串101可以用来描述1111111111；00000000000可描述为"11个0"，因此它的p型编码串即为110；100200300可描述为"1个1、2个 0、1个2、2个0、1个3、2个0"，因此它的p型编码串为112012201320。

输入
输入仅一行，包含字符串str。每一行字符串最多包含1000个数字字符。
输出
输出该字符串对应的p型编码串。

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1001];
    int i,m=1;
    gets(a);
    for(i=0;i<strlen(a);i++)
        if(a[i]==a[i+1])
            m++;
        else
        {
            cout<<m<<a[i];
            m=1;
        }
}

/*OK
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=0, cnt = 0;
    char ch;
    while(i<str.size())
    {
        cnt = 1;
        ch = str[i];
        while(ch==str[++i])
        {
            cnt++;
        }
        cout<<cnt<<ch-'0';
    }

    return 0;
}
*/
