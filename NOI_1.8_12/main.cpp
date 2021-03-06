/*
12:变幻的矩阵
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
有一个N x N（N为奇数，且1 <= N <= 10）的矩阵，矩阵中的元素都是字符。这个矩阵可能会按照如下的几种变幻法则之一进行变幻（只会变幻一次）。

现在给出一个原始的矩阵，和一个变幻后的矩阵，请编写一个程序，来判定原始矩阵是按照哪一种法则变幻为目标矩阵的。

1. 按照顺时针方向旋转90度；
如：

1 2 3        7 4 1
4 5 6 变幻为  8 5 2
7 8 9        9 6 3

2. 按照逆时针方向旋转90度；
如：
1 2 3        3 6 9
4 5 6 变幻为  2 5 8
7 8 9        1 4 7

3. 中央元素不变（如下例中的 5），其他元素（如下例中的3）与“以中央元素为中心的对应元素”（如下例中的7）互换；
如：
1 2 3       9 8 7
4 5 6 变幻为 6 5 4
7 8 9       3 2 1

4. 保持原始矩阵，不变幻；

5. 如果 从原始矩阵 到 目标矩阵 的变幻，不符合任何上述变幻，请输出5
输入
第一行：矩阵每行/列元素的个数 N；
第二行到第N+1行：原始矩阵，共N行，每行N个字符；
第N+2行到第2*N+1行：目标矩阵，共N行，每行N个字符；
输出
只有一行，从原始矩阵 到 目标矩阵 的所采取的 变幻法则的编号。

*/

#include <iostream>

using namespace std;

char m1[15][15], m2[15][15];

int main()
{
    int N;
    cin>>N;
    //read
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cin>>m1[i][j];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cin>>m2[i][j];
    }

    //1
    bool flag1 = true;
    for(int i=0;i<N && flag1==true;i++)
    {
        for(int j=0;j<N && flag1==true;j++)
        {
            if(m2[i][j] != m1[N-1-j][i])
                flag1=false;
        }
    }
    if(flag1==true)
        cout<<"1";

    //2
    bool flag2 = true;
    for(int i=0;i<N && flag2==true;i++)
    {
        for(int j=0;j<N && flag2==true;j++)
        {
            if(m1[i][j] != m2[N-1-j][i])
                flag2=false;
        }
    }
    if(flag2==true)
        cout<<"2";

    //3
    bool flag3 = true;
    for(int i=0;i<N && flag3==true;i++)
    {
        for(int j=0;j<N && flag3==true;j++)
        {
            if(m1[i][j] != m2[N-1-i][N-1-j])
                flag3=false;
        }
    }
    if(flag3==true)
        cout<<"3";



    //4
    bool flag4 = true;
    for(int i=0;i<N && flag4==true;i++)
    {
        for(int j=0;j<N && flag4==true;j++)
        {
            if(m1[i][j] != m2[i][j])
                flag4=false;
        }
    }
    if(flag4==true)
        cout<<"4";

    if(!flag1 && !flag2 &&!flag3 &&!flag4)
        cout<<"5";
    return 0;
}
