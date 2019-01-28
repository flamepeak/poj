/*
08:石头剪刀布
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
石头剪刀布是常见的猜拳游戏。石头胜剪刀，剪刀胜布，布胜石头。如果两个人出拳一样，则不分胜负。

一天，小A和小B正好在玩石头剪刀布。已知他们的出拳都是有周期性规律的，比如：“石头-布-石头-剪刀-石头-布-石头-剪刀……”，就是以“石头-布-石头-剪刀”为周期不断循环的。请问，小A和小B比了N轮之后，谁赢的轮数多？

输入
输入包含三行。
第一行包含三个整数：N，NA，NB，分别表示比了N轮，小A出拳的周期长度，小B出拳的周期长度。0 < N,NA,NB < 100。
第二行包含NA个整数，表示小A出拳的规律。
第三行包含NB个整数，表示小B出拳的规律。
其中，0表示“石头”，2表示“剪刀”，5表示“布”。相邻两个整数之间用单个空格隔开。
输出
输出一行，如果小A赢的轮数多，输出A；如果小B赢的轮数多，输出B；如果两人打平，输出draw。
*/

#include <iostream>

using namespace std;

int main()
{
    int N, NA, NB,Count=0;
    cin>>N>>NA>>NB;
    int A[NA], B[NB];
    for(int i=0;i<NA;i++)
        cin>>A[i];
    for(int i=0;i<NB;i++)
        cin>>B[i];
    for(int i=0;i<N;i++)
    {
        if((A[i%NA]==0&&B[i%NB]==2) || (A[i%NA]==2&&B[i%NB]==5) || (A[i%NA]==5&&B[i%NB]==0) )
            Count++;
        else if( ((A[i%NA]==2&&B[i%NB]==0) || (A[i%NA]==5&&B[i%NB]==2) || (A[i%NA]==0&&B[i%NB]==5) ) )
            Count--;
    }
    if(Count>0)
        cout<<"A";
    else if(Count<0)
        cout<<"B";
    else
        cout<<"draw";
    return 0;
}
