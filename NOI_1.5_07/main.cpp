/*
07:奥运奖牌计数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。

输入
输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
输出
输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int gold=0, silver=0, bronze=0;
    int a, b, c;
    cin >>n;
    while(n--)
    {
        cin>>a>>b>>c;
        gold += a;
        silver += b;
        bronze += c;
    }
    cout<<gold<<" "<<silver<<" "<<bronze<<" "<<gold+silver+bronze;
    return 0;
}
