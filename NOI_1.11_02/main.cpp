/*
02:二分法求函数的零点
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
有函数：

f(x) = x5 - 15 * x4+ 85 * x3- 225 * x2+ 274 * x - 121

已知 f(1.5) > 0 , f(2.4) < 0 且方程 f(x) = 0 在区间 [1.5,2.4] 有且只有一个根，请用二分法求出该根。

输入
无。
输出
该方程在区间[1.5,2.4]中的根。要求四舍五入到小数点后6位。

*/



#include <iostream>
#include <cstdio>
#include <cmath>

double fx(double x)
{
    return pow(x,5)-15*pow(x,4)+85*pow(x,3)-225*pow(x,2)+274*x-121;
}

int main()
{
    double lft=1.5,rgt=2.4,cur;
    double eps = 0.0000001;
    while(rgt-lft>eps)
    {
        cur = (lft+rgt)/2.0;
        if(fx(cur)>0)
            lft = cur;
        else
            rgt = cur;
    }
    printf("%.6lf", cur);
    return 0;
}




/*
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

double fx(double x)
{
    double sum = pow(x,5) - 15*pow(x,4) + 85*pow(x,3) -225*pow(x,2) + 274*x -121;
    //double sum = x*x*x*x*x - 15*x*x*x*x + 85*x*x*x -225*x*x + 274*x -121.0;
    return sum;
}

int main()
{
    double lft=1.5, rgt=2.4,cur;
    while(1)
    {
        cur = (lft + rgt)/2;
        if(fx(cur)>0.000001)
            lft = cur;
        else if(fx(cur)<-0.000001)
            rgt = cur;
        else
            break;
    }
    printf("%.6lf", cur);
    return 0;
}
*/
