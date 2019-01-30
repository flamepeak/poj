/*
03:成绩排序
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。

输入
第一行为n (0 < n < 20)，表示班里的学生数目；
接下来的n行，每行为每个学生的名字和他的成绩, 中间用单个空格隔开。名字只包含字母且长度不超过20，成绩为一个不大于100的非负整数。
输出
把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。

*/

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct student
{
    string name;
    int score;
};

student A[20];

int cmp(student a,student b)
{
    if(a.score!=b.score)
    {
        return a.score>b.score;
    }
    else
    {
        return a.name<b.name;
    }
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i].name>>A[i].score;
    }

    sort(A,A+n,cmp);

    for(int i=0;i<n;i++)
        cout<<A[i].name<<" "<<A[i].score<<endl;

    return 0;
}
