/*
07:机器翻译
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
小晨的电脑上安装了一个机器翻译软件，他经常用这个软件来翻译英语文章。

这个翻译软件的原理很简单，它只是从头到尾，依次将每个英文单词用对应的中文含义来替换。对于每个英文单词，软件会先在内存中查找这个单词的中文含义，如果内存中有，软件就会用它进行翻译；如果内存中没有，软件就会在外存中的词典内查找，查出单词的中文含义然后翻译，并将这个单词和译义放入内存，以备后续的查找和翻译。

假设内存中有M个单元，每单元能存放一个单词和译义。每当软件将一个新单词存入内存前，如果当前内存中已存入的单词数不超过M−1，软件会将新单词存入一个未使用的内存单元；若内存中已存入M 个单词，软件会清空最早进入内存的那个单词，腾出单元来，存放新单词。

假设一篇英语文章的长度为N个单词。给定这篇待译文章，翻译软件需要去外存查找多少次词典？假设在翻译开始前，内存中没有任何单词。

输入
输入文件共2行。每行中两个数之间用一个空格隔开。
第一行为两个正整数M和N，代表内存容量和文章的长度。
第二行为N个非负整数，按照文章的顺序，每个数（大小不超过1000）代表一个英文单词。文章中两个单词是同一个单词，当且仅当它们对应的非负整数相同。

对于10%的数据有M = 1，N ≤ 5。
对于100%的数据有0 < M ≤ 100，0 < N ≤ 1000。
输出
共1行，包含一个整数，为软件需要查词典的次数。
*/





#include<iostream>
using namespace std;
int a[10001],b[1001],M,N,i,j=1,k=0,nn;
int main()
{
    cin>>M>>N;
    for(i=1;i<=M;i++)
        b[i]=-1;
    for(i=1;i<=N;i++)
        cin>>a[i];
    for(i=1;i<=N;i++)
    {
        nn=1;
        if(j==M+1)
            j=1;
        for(int jj=1;jj<=M;jj++)
            if(a[i]==b[jj])
                nn=0;
        if(nn)
        {
            b[j]=a[i];
            k++;
            j++;
        }
    }
    cout<<k;
    return 0;
}


/*
#include <iostream>

using namespace std;

int A[1005];
int B[1005];

int main()
{
    int M, N, val, st=0,cnt=0;
    bool flag = false;
    cin>>M>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        if(cnt<M)
        {
            flag = false;
            for(int j=0;j<cnt;j++)
            {
                if(B[j]==A[i])
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                B[cnt++]=A[i];
            }
        }
        else
        {
            flag = false;
            for(int j=st;j<st+M;j++)
            {
                if(B[j]==A[i])
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                B[cnt++]=A[i];
                st++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
*/
