/*
15:银行利息
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
农夫约翰在去年赚了一大笔钱！他想要把这些钱用于投资，并对自己能得到多少收益感到好奇。已知投资的复合年利率为R（0到20之间的整数）。约翰现有总值为M的钱（100到1,000,000之间的整数）。他清楚地知道自己要投资Y年（范围0到400）。请帮助他计算最终他会有多少钱，并输出它的整数部分。数据保证输出结果在32位有符号整数范围内。

输入
一行包含三个整数R，M，Y，相邻两个整数之间用单个空格隔开。
输出
一个整数，即约翰最终拥有多少钱（整数部分）。
*/

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double r,m,y;
    int i,j;
    cin>>r>>m>>y;
    r=r*0.01+1;
    for(i=1;i<=y;i++)
    {
        m=m*r;
    }
    j=m/1;
    printf("%d",j);
    return 0;
}


#include<iostream>
#include<cstdio>
#include <cmath>
using namespace std;
int main(){
double r,m,y;
int i,j;
cin>>r>>m>>y;
r=r*0.01+1;
for(i=1;i<=y;i++){
m=m*r;
}
j=floor(m);
printf("%d",j);
return 0;
}



#include<iostream>
#include<cstdio>
using namespace std;
int main(){
double r,m,y;
int i,j;
cin>>r>>m>>y;
r=r*0.01+1;
for(i=1;i<=y;i++){
m=m*r;
}
printf("%d",int(m));
return 0;
}





