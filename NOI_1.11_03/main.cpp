/*
03:矩形分割
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
平面上有一个大矩形，其左下角坐标（0，0），右上角坐标（R,R)。大矩形内部包含一些小矩形，小矩形都平行于坐标轴且互不重叠。所有矩形的顶点都是整点。要求画一根平行于y轴的直线x=k（k是整数) ，使得这些小矩形落在直线左边的面积必须大于等于落在右边的面积，且两边面积之差最小。并且，要使得大矩形在直线左边的的面积尽可能大。注意：若直线穿过一个小矩形，将会把它切成两个部分，分属左右两侧。

输入
第一行是整数R，表示大矩形的右上角坐标是(R,R) (1 <= R <= 1,000,000)。
接下来的一行是整数N,表示一共有N个小矩形(0 < N <= 10000)。
再接下来有N 行。每行有4个整数，L,T, W 和 H, 表示有一个小矩形的左上角坐标是(L,T),宽度是W，高度是H (0<=L,T <= R, 0 < W,H <= R). 小矩形不会有位于大矩形之外的部分。
输出
输出整数n，表示答案应该是直线 x=n。 如果必要的话，x=R也可以是答案。

*/



#include<cstdio>
int a[1000010],R,N;
int main()
{
    scanf("%d %d",&R,&N);
    for(int i=0;i<N;i++)
    {
        int l,t,w,h;
        scanf("%d %d %d %d",&l,&t,&w,&h);
        for(int i=l;i<l+w;i++)
            a[i]+=h;
    }
    int l=0,r=R,mid;
    long long lftS=0,rgtS=0;
    while(r>l)
    {
        lftS=0; rgtS=0; mid=(l+r)/2;
        for(int i=0;i<mid;i++)
            lftS+=a[i];
        for(int i=mid;i<R;i++)
            rgtS+=a[i];
        if(r-l==1)
        {
            if(lftS>=rgtS)
            {
                if(lftS+a[l]>=rgtS-a[l] && (lftS+a[l]-(rgtS-a[l])<=lftS-rgtS))
                    l++;
                else
                    break;
            }
            else
                l++;
        }
        else
        {
            if(lftS<=rgtS) l=mid;
            if(lftS>rgtS) r=mid;
        }
    }
    while(l+1<=R && a[l+1]==0)
        l++;
    printf("%d",l);
    return 0;
}






/* OK high speed
#include<bits/stdc++.h>
using namespace std;
int R,N,a,b,c,d,i,j,s[1000010],ans=0;
long long x=0,y;
int main()
{
    cin>>R>>N;
    for(i=1;i<=N;i++)
    {
        cin>>a>>b>>c>>d;
        for(j=a+1;j<=a+c;j++)
            {s[j]+=d;y+=d;}
    }
    while(ans<R&&s[ans]==0)
        ans++;
    while(x+s[ans]<=y-s[ans])
    {
        if(ans==R)
            break;
        x+=s[ans];
        y-=s[ans];
        if(y==x)
            break;
        ans++;
    }
    while(ans<R&&s[ans+1]==0)
        ans++;
    cout<<ans;
    return 0;
}
*/





/* Wrong
#include <iostream>

using namespace std;

struct square
{
    int L;
    int T;
    int W;
    int H;
};

square A[10005];

int main()
{
    int R, N, k, Min=1000000, lft,rgt;
    long int lftS=0,rgtS=0;
    cin>>R>>N;
    lft=0, rgt=R;
    for(int i=0;i<N;i++)
    {
        cin>>A[i].L>>A[i].T>>A[i].W>>A[i].H;
    }
    while(rgt>lft)
    {
        k = (lft+rgt)/2;
        if(rgt-lft==1 || k==R)
            break;
        lftS=0, rgtS=0;
        for(int i=0;i<N;i++)
        {
            if(A[i].L+A[i].W<=k)
                lftS += A[i].W*A[i].H;//0-k
            else if(A[i].L>=k+1)
                rgtS += A[i].W*A[i].H;//k+1-R
            else
            {
                lftS += (k-A[i].L)*A[i].H;
                rgtS += (A[i].L+A[i].W-k-1)*A[i].H;
            }
        }
        if(lftS>rgtS)
            rgt = k;
        else
            lft = k;


    }
    long int tempLftS = lftS;
    while(++k)
    {
        lftS = 0;
        for(int i=0;i<N;i++)
        {
            if(A[i].L+A[i].W<=k)
                lftS += A[i].W*A[i].H;//0-k
        }
        cout<<k<<lftS<<" "<<tempLftS<<endl;
        if(lftS != tempLftS)
            break;

    }
    cout<<k-1;

    return 0;
}
*/
