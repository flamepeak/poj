/*
02:财务管理
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
Larry今年毕业并找到了一份工作。他赚很多钱，但似乎总是不够。Larry认为他需要控制他的投资以解决自己的财务问题。Larry拿到了自己的银行账户详单，想看看自己有多少钱。请帮助Larry写一个程序，通过过去12个月中每月的月末结余，计算平均结余。

输入
输入包含12行，每行包含一个数，为某个月的结余。每个数都是不大于1,000,000的正数，保留两位小数，省略"$"符。
输出
输出一个数，为这12个月的平均月末结余，保留到小数点后第二位，并在最前面加一个"$"符。

*/


#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double monthly, sum=0.0, avg = 0.0;
    for(int i=0;i<12;i++)
    {
        cin>>monthly;
        sum += monthly;
    }
    avg = sum/12;
    printf("$%.2lf",avg);

    return 0;
}
