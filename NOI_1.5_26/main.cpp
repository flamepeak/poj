/*
26:统计满足条件的4位数个数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定若干个四位数，求出其中满足以下条件的数的个数：

个位数上的数字减去千位数上的数字，再减去百位数上的数字， 再减去十位数上的数字的结果大于零。

输入
输入为两行，第一行为四位数的个数n，第二行为n个的四位数，数与数之间以一个空格分开。(n <= 100)
输出
输出为一行，包含一个整数，表示满足条件的四位数的个数。
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int num, Count = 0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num%10-num/10%10-num/100%10-num/1000>0)
            Count++;
    }
    cout << Count;
    return 0;
}
