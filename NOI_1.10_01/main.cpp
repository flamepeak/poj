/*
01:谁考了第k名
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，求考第k名学生的学号和成绩。

输入
第一行有两个整数，分别是学生的人数n（1≤n≤100），和求第k名学生的k（1≤k≤n）。
其后有n行数据，每行包括一个学号（整数）和一个成绩（浮点数），中间用一个空格分隔。
输出
输出第k名学生的学号和成绩，中间用空格分隔。（注：请用%g输出成绩）

*/


#include <bits/stdc++.h>

using namespace std;

struct student
{
    int id;
    float score;
};

int main()
{
    student stu[105],tmp;
    int n, k;
    bool NoSwap;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].id>>stu[i].score;
    }
    for(int i=0;i<n-1;i++)
    {
        NoSwap = true;
        for(int j=n-1;j>i;j--)
        //for(int j=0;j<n-i-1;j++)
        {
            //if(stu[j].score<stu[j+1].score)
            if(stu[j].score>stu[j-1].score)
            {
                tmp = stu[j];
                stu[j] = stu[j-1];
                stu[j-1] = tmp;
                NoSwap = false;
            }
        }
        if(NoSwap)
        {
            printf("%d %g", stu[k-1].id, stu[k-1].score);
            return 0;
        }
    }
    printf("%d %g", stu[k-1].id, stu[k-1].score);

    return 0;
}







/* Error Don't know why
#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

std::map<float, long int> student;

int main()
{
    int n, i=0, k;
    float score;
    long int code;
    cin>>n>>k;
    while(n--)
    {
        cin>>code>>score;
        student[score] = code;
    }
    map<float, long int>::reverse_iterator iter;
    for(iter = student.rbegin();iter != student.rend();iter++)
    {
        i++;
        if(i==k)
        {
            printf("%d %g", iter->second, iter->first);
            return 0;
        }
    }
    return 0;
}
*/
