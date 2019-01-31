/*
05:派
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
我的生日要到了！根据习俗，我需要将一些派分给大家。我有N个不同口味、不同大小的派。有F个朋友会来参加我的派对，每个人会拿到一块派（必须一个派的一块，不能由几个派的小块拼成；可以是一整个派）。

我的朋友们都特别小气，如果有人拿到更大的一块，就会开始抱怨。因此所有人拿到的派是同样大小的（但不需要是同样形状的），虽然这样有些派会被浪费，但总比搞砸整个派对好。当然，我也要给自己留一块，而这一块也要和其他人的同样大小。

请问我们每个人拿到的派最大是多少？每个派都是一个高为1，半径不等的圆柱体。

输入
第一行包含两个正整数N和F，1 ≤ N, F ≤ 10 000，表示派的数量和朋友的数量。
第二行包含N个1到10000之间的整数，表示每个派的半径。
输出
输出每个人能得到的最大的派的体积，精确到小数点后三位。
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

const double PI = acos(-1.0);

double S[10005];//size of pai

int main()
{
    int N, F, r, cnt=0;
    double maxSize=0.0;
    cin>>N>>F;
    F++;
    for(int i=0;i<N;i++)
    {
        cin>>r;
        S[i] = PI*r*r;
        maxSize = max(maxSize, S[i]);
    }
    double lft=0.0, rgt=maxSize, mid;
    while(lft+0.000001<rgt)
    {
        mid = (rgt+lft)/2;
        cnt = 0;
        for(int i=0;i<N;i++)
        {
            cnt += S[i]/mid;
        }
        if(cnt>=F)
            lft = mid;
        else
            rgt = mid;
    }
    printf("%.3lf", mid);
    return 0;
}

/* OK
#include<bits/stdc++.h>
using namespace std;
int n,k,t;
double a[10010],pi=acos(-1.0),l,r,mid;
int main()
{
cin>>n>>k;k++;
for(int i=0;i<n;i++)
{scanf("%lf",&a[i]);a[i]=a[i]*a[i]*pi;r=max(r,a[i]);}
while(l+0.000001<r)
{
t=0;mid=(l+r)/2;
for(int i=0;i<n;i++)t+=a[i]/mid;
if(t>=k)l=mid;
else r=mid;
}
printf("%.3lf",l);
return 0;
}
*/
