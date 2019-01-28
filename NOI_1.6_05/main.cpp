/*
05:年龄与疾病
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。

输入
共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
输出
按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。

*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, Count0=0,Count19=0,Count36=0,Count61=0;
    cin>>n;
    int age;
    for(int i=0;i<n;i++)
    {
        cin>>age;
        if(age>=0 && age<=18)
            Count0++;
        else if(age>=19 && age<=35)
            Count19++;
        else if(age>=36 && age<=60)
            Count36++;
        else
            Count61++;
    }
    printf("%.2f%%\n", Count0*100.0/n);
    printf("%.2f%%\n", Count19*100.0/n);
    printf("%.2f%%\n", Count36*100.0/n);
    printf("%.2f%%", Count61*100.0/n);
    return 0;
}
