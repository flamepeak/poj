/*
20:球弹跳高度的计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
一球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。
编程计算气球在第10次落地时，共经过多少米? 第10次反弹多高？

输入
输入一个整数h，表示球的初始高度。
输出
输出包含两行：
第1行：到球第10次落地时，一共经过的米数。
第2行：第10次弹跳的高度。

注意：结果可能是实数，结果用double类型保存。
提示：输出时不需要对精度特殊控制，用cout << ANSWER，或者printf("%g", ANSWER)即可。
*/

#include <iostream>

using namespace std;

int main()
{
    double h;
    cin>>h;
    double sum=h;
    double temp=h;
    for(int i=2;i<=10;i++)
    {
        temp = temp/2;
        sum += temp*2;
    }
    cout<<sum<<endl;
    cout<<temp/2<<endl;
    return 0;
}