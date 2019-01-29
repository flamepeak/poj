/*
15:接水问题
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
学校里有一个水房，水房里一共装有 m 个龙头可供同学们打开水，每个龙头每秒钟的供水量相等，均为 1。

现在有 n 名同学准备接水，他们的初始接水顺序已经确定。将这些同学按接水顺序从 1 到 n 编号，i号同学的接水量为 wi。接水开始时，1 到 m 号同学各占一个水龙头，并同时打开水龙头接水。当其中某名同学 j 完成其接水量要求 wj后，下一名排队等候接水的同学 k 马上接替 j 同学的位置开始接水。这个换人的过程是瞬间完成的，且没有任何水的浪费。即 j 同学第 x 秒结束时完成接水，则 k 同学第 x+1 秒立刻开始接水。 若当前接水人数 n’不足 m，则只有 n’个龙头供水，其它 m-n’个龙头关闭。

现在给出 n 名同学的接水量，按照上述接水规则，问所有同学都接完水需要多少秒。

输入
第 1 行2 个整数 n 和 m，用一个空格隔开，分别表示接水人数和龙头个数。
第 2 行 n 个整数 w1、w2、……、wn，每两个整数之间用一个空格隔开，wi表示 i 号同学的接水量。

1 ≤ n ≤ 10000，1 ≤ m ≤ 100 且 m ≤ n；
1 ≤ wi ≤ 100。
输出
输出只有一行，1 个整数，表示接水所需的总时间。

*/

#include <iostream>

using namespace std;

int W[10005], M[105];

int main()
{
    int n, m, Min=100, Max=0, minIndex;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>W[i];
    }
    for(int i=1;i<=m;i++)
    {
        M[i] = W[i];
    }
    for(int j=m+1;j<=n;j++)
    {
        Min=10000*100;
        for(int i=1;i<=m;i++)
        {
            if(M[i]<Min)
            {
                Min = M[i];
                minIndex = i;
            }
        }
        M[minIndex] += W[j];
    }
    for(int i=1;i<=m;i++)
    {
        if(M[i]>Max)
            Max = M[i];
    }
    cout<<Max;

    return 0;
}