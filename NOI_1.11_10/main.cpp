/*
10:河中跳房子
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
每年奶牛们都要举办各种特殊版本的跳房子比赛，包括在河里从一个岩石跳到另一个岩石。这项激动人心的活动在一条长长的笔直河道中进行，在起点和离起点L远 (1 ≤ L≤ 1,000,000,000) 的终点处均有一个岩石。在起点和终点之间，有N (0 ≤ N ≤ 50,000) 个岩石，每个岩石与起点的距离分别为Di (0 < Di < L)。

在比赛过程中，奶牛轮流从起点出发，尝试到达终点，每一步只能从一个岩石跳到另一个岩石。当然，实力不济的奶牛是没有办法完成目标的。

农夫约翰为他的奶牛们感到自豪并且年年都观看了这项比赛。但随着时间的推移，看着其他农夫的胆小奶牛们在相距很近的岩石之间缓慢前行，他感到非常厌烦。他计划移走一些岩石，使得从起点到终点的过程中，最短的跳跃距离最长。他可以移走除起点和终点外的至多M (0 ≤ M ≤ N) 个岩石。

请帮助约翰确定移走这些岩石后，最长可能的最短跳跃距离是多少？



输入
第一行包含三个整数L, N, M，相邻两个整数之间用单个空格隔开。
接下来N行，每行一个整数，表示每个岩石与起点的距离。岩石按与起点距离从近到远给出，且不会有两个岩石出现在同一个位置。
*/

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int l,n,m,a[50003],ans;
int count(int mid)
{
    int j=0,cnt=0;//cnt记录删去石头数
    for(int i=1;i<=n+1;i++)
    {
        if(a[i]-a[j] < mid)//石头间距离如果小于枚举的，就记录并删去。
            cnt++;
        else
            j=i;//否则移动起点
    }
    return cnt;
}
int main()
{
    scanf("%d%d%d",&l,&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    a[n+1]=l;
    int left=1,right=l,middle,ans;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(count(middle)<=m)
        {
            ans = middle;
            left=middle+1;
        }
        else
            right=middle-1;
    }
    printf("%d",ans);
    return 0;
}






/*
#include <iostream>

using namespace std;

int A[50005];

int main()
{
    int L, N, M, temp;
    cin>>L>>N>>M;
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
    }
    A[N+1]=L;
    int lft = 0, rgt=L+1, mid;
    while(lft+1<rgt)
    {
        int i=0,k=0,j;
        mid = (lft+rgt)>>1;
        while(i<=N)
        {
            j = i+1;
            while(A[j]-A[i]<mid&&j<N+2)
                j++;
            k = k+ j-i-1;
            i=j;
        }
        if(k>M)
            rgt=mid;
        else
            lft=mid;
    }
    cout<<lft;
    return 0;
}
*/
