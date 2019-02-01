/*
06:寻宝
查看 提交 统计 提问
总时间限制: 2000ms 内存限制: 65536kB
描述
传说很遥远的藏宝楼顶层藏着诱人的宝藏。小明历尽千辛万苦终于找到传说中的这个藏 宝楼，藏宝楼的门口竖着一个木板，上面写有几个大字：寻宝说明书。说明书的内容如下：

藏宝楼共有 N+1 层，最上面一层是顶层，顶层有一个房间里面藏着宝藏。除了顶层外，藏宝楼另有 N 层，每层 M 个房间，这 M 个房间围成一圈并按逆时针方向依次编号为 0，…， M-1。其中一些房间有通往上一层的楼梯，每层楼的楼梯设计可能不同。每个房间里有一个指示牌，指示牌上有一个数字 x，表示从这个房间开始按逆时针方向选择第 x 个有楼梯的房间（假定该房间的编号为 k），从该房间上楼，上楼后到达上一层的 k 号房间。比如当前房间的指示牌上写着 2，则按逆时针方向开始尝试，找到第 2 个有楼梯的房间，从该房间上楼。如果当前房间本身就有楼梯通向上层，该房间作为第一个有楼梯的房间。

寻宝说明书的最后用红色大号字体写着：“寻宝须知：帮助你找到每层上楼房间的指示牌上的数字（即每层第一个进入的房间内指示牌上的数字）总和为打开宝箱的密钥”。

请帮助小明算出这个打开宝箱的密钥。

输入
第一行 2 个整数 N 和 M，之间用一个空格隔开。N 表示除了顶层外藏宝楼共 N 层楼， M 表示除顶层外每层楼有 M 个房间。
接下来 N*M 行，每行两个整数，之间用一个空格隔开，每行描述一个房间内的情况，其中第(i-1)*M+j 行表示第 i 层 j-1 号房间的情况（i=1, 2, …, N；j=1, 2, … ,M）。第一个整数表示该房间是否有楼梯通往上一层（0 表示没有，1 表示有），第二个整数表示指示牌上的数字。注意，从 j 号房间的楼梯爬到上一层到达的房间一定也是 j 号房间。
最后一行，一个整数，表示小明从藏宝楼底层的几号房间进入开始寻宝（注：房间编号从 0 开始）。

对于50%数据，有 0< N ≤ 1000，0 < x ≤ 10000；
对于100%数据，有 0 < N ≤ 10000，0 < M ≤ 100，0 < x ≤ 1,000,000。
输出
输出只有一行，一个整数，表示打开宝箱的密钥，这个数可能会很大，请输出对 20123 取模的结果即可。


*/


//注意此题必须要用scanf, C++模式下会超时


//#include <iostream>
#include <stdio.h>

//using namespace std;

struct house
{
    int isStairs;
    int id;
};

house A[10005][105];

int main()
{
    int N, M, st, stairsNum;
    long int sum=0;
    //cin>>N>>M;
    scanf("%d %d", &N, &M);
    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<M;j++)
            scanf("%d %d",&A[i][j].isStairs, &A[i][j].id);
            //cin>>A[i][j].isStairs>>A[i][j].id;
    }
    //cin>>st;
    scanf("%d",&st);
    int j = st, cnt, per;
    for(int i=1;i<=N;i++)
    {
        sum += A[i][st].id;
        //cout<<A[i][st].id<<endl;
        stairsNum = 0;
        for(int j=0;j<M;j++)
        {
            if(A[i][j].isStairs==1)
                stairsNum++;
        }
        per = A[i][st].id % stairsNum ;
        per = (per==0)?stairsNum:per;
        //cout<<per<<endl;
        cnt = 0;
        for(int j=st;j<M;j++)
        {
            if(A[i][j].isStairs==1)
                cnt++;
            if(cnt==per)
            {//cout<<"first "<<j<<endl;
                st=j;
                break;
            }
        }
        if(cnt<per)
        {
            for(int j=0;j<M;j++)
            {
                if(A[i][j].isStairs==1)
                    cnt++;
                if(cnt==per)
                {//cout<<"sec "<<j<<endl;
                    st=j;
                    break;
                }
            }
        }


    }
    printf("%d", sum%20123) ;
    return 0;
}
