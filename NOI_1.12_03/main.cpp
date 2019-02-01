/*
03:甲流病人初筛
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
目前正是甲流盛行时期，为了更好地进行分流治疗，医院在挂号时要求对病人的体温和咳嗽情况进行检查，对于体温超过37.5度（含等于37.5度）并且咳嗽的病人初步判定为甲流病人（初筛）。现需要统计某天前来挂号就诊的病人中有多少人被初筛为甲流病人。

输入
第一行是某天前来挂号就诊的病人数n。（n < 200）
其后有n行，每行是病人的信息，包括三个信息：姓名（字符串，不含空格，最多8个字符）、体温（float）、是否咳嗽（整数，1表示咳嗽，0表示不咳嗽）。每行三个信息之间以一个空格分开。
输出
按输入顺序依次输出所有被筛选为甲流的病人的姓名，每个名字占一行。之后在输出一行，表示被筛选为甲流的病人数量。
*/




#include <iostream>

using namespace std;

int main()
{
    string name;
    float temperature;
    int n, cough,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>name>>temperature>>cough;
        if(temperature>=37.5 && cough==1)
        {
            cout<<name<<endl;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
