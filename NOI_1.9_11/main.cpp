/*
11:连续出现的字符
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个字符串，在字符串中找到第一个连续出现至少k次的字符。

输入
第一行包含一个正整数k，表示至少需要连续出现的次数。1 <= k <= 1000。
第二行包含需要查找的字符串。字符串长度在1到1000之间，且不包含任何空白符。
输出
若存在连续出现至少k次的字符，输出该字符；否则输出No。

*/

#include <iostream>

using namespace std;

int main()
{
    int k,j, cnt=1;
    cin>>k;
    string str;
    cin.get();
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1])
        {
            cnt++;
        }
        else
            cnt=1;
        if(cnt==k)
        {
            cout<<str[i];
            return 0;
        }
    }
    cout<<"No";
    return 0;
}




/*此处POJ通过不了，不知什么原因
#include <iostream>

using namespace std;

int main()
{
    int k,j;
    cin>>k;
    string str;
    cin.get();
    cin>>str;
    for(int i=0;i<str.size()-k;i++)
    {
        j = 0;
        while(str[i]==str[i+j])
        {
            j++;
            if(j==k)
            {
                cout<<str[i];
                return 0;
            }
        }
        i = i+j-1;
    }
    cout<<"No";
    return 0;
}
*/
