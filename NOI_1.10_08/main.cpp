/*
08:病人排队
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
病人登记看病，编写一个程序，将登记的病人按照以下原则排出看病的先后顺序：
1. 老年人（年龄 >= 60岁）比非老年人优先看病。
2. 老年人按年龄从大到小的顺序看病，年龄相同的按登记的先后顺序排序。
3. 非老年人按登记的先后顺序看病。
输入
第1行，输入一个小于100的正整数，表示病人的个数；
后面按照病人登记的先后顺序，每行输入一个病人的信息，包括：一个长度小于10的字符串表示病人的ID（每个病人的ID各不相同且只含数字和字母），一个整数表示病人的年龄，中间用单个空格隔开。
输出
按排好的看病顺序输出病人的ID，每行一个。

*/

#include <iostream>
#include <algorithm>

using namespace std;

struct patient
{
    int index;
    int age;
    string id;
};

patient A[105];

int cmp(patient a, patient b)
{
    if(a.age>=60 && b.age<60)
    {
        return a.age>b.age;
    }
    if(a.age<60 && b.age>=60)
        return a.age>b.age; //理解有些问题
    if(a.age>=60 && b.age>=60)
    {
        if(a.age==b.age)
            return a.index<b.index;
        else
            return a.age>b.age;
    }
    if(a.age<60 && b.age<60)
        return a.index<b.index;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i].id>>A[i].age;
        A[i].index = i;
    }

    sort(A, A+n, cmp);
    for(int i=0;i<n;i++)
        cout<<A[i].id<<endl;

    return 0;
}
