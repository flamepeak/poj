/*
30:字符环
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
有两个由字符构成的环。请写一个程序，计算这两个字符环上最长连续公共字符串的长度。例如，字符串“ABCEFAGADEGKABUVKLM”的首尾连在一起，构成一个环；字符串“MADJKLUVKL”的首尾连在一起，构成一个另一个环；“UVKLMA”是这两个环的一个连续公共字符串。

输入
一行，包含两个字符串，分别对应一个字符环。这两个字符串之间用单个空格分开。字符串长度不超过255，且不包含空格等空白符。
输出
输出一个整数，表示这两个字符环上最长公共字符串的长度。
*/

#include <iostream>

using namespace std;

// 主要思路： 假设str1=abc, str2 =bc,字符串环的问题等价于str1=abcabc与str2=bcbc问题，这样就是求abcabc和bcbc的
//最大公共子串，很明显，最大公共子串的长度最大为长度较小的字符串长度。即，在str2中从大至小取出子串在str1中查找，如果
//能找到这个就是最大子串。

int main()
{
    string str1, str2, sub, temp;
    cin>>str1>>str2;
    if(str2.size()>str1.size()) //将长度较大的串设为str1
    {
        temp = str2;
        str2 = str1;
        str1 = temp;
    }

    int str2Len = str2.size(); //公共子串的最大长度，即str2的长度
    str1 += str1;  //将环的问题转化为字符串
    str2 += str2;
    for(int i = str2Len;i>=0;i--) //公共字符串的长度依次减少
    {
        for(int j=0;j<str2.size()-str2Len;j++)//公共字符串的起始位置j
        {
            sub = str2.substr(j,i); //公共子串sub
            if(str1.find(sub) != string::npos)//判断子串sub是否在str1中存在
            {
                cout<<i;
                return 0;
            }
        }
    }

    return 0;
}
