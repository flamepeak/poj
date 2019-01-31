/*
07:和为给定数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出若干个整数，询问其中是否有一对数的和等于给定的数。

输入
共三行：
第一行是整数n(0 < n <= 100,000)，表示有n个整数。
第二行是n个整数。整数的范围是在0到10^8之间。
第三行是一个整数m（0 <= m <= 2^30)，表示需要得到的和。
输出
若存在和为m的数对，输出两个整数，小的在前，大的在后，中间用单个空格隔开。若有多个数对满足条件，选择数对中较小的数更小的。若找不到符合要求的数对，输出一行No。
*/


/* OK
#include<bits/stdc++.h>
using namespace std;
long a[100005];
long m;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    i=0,j=n-1;
    sort(a,a+n);
    while(i<j)
    {
        if(a[i]+a[j]==m)
        {
            cout<<a[i]<<' '<<a[j];
            return 0;
        }
        else if(a[i]+a[j]>m)
        {
            j--;
        }
        else
            i++;
    }
    cout<<"No";
}
*/


#include <iostream>
#include <algorithm>

using namespace std;

int A[100005];

int main()
{
    int n, m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A, A+n);
    cin>>m;
    int lft, rgt, mid;
    if(n==1)
    {
        if(A[0]==m)
            cout<<A[0];
        else
            cout<<"No";
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        lft = i+1, rgt = n-1; //此处必须从i+1开始，否则出错
        while(lft<=rgt)
        {
            mid = (lft+rgt)>>1;
            if(A[mid]+A[i]>m)
                rgt = mid-1;
            else if(A[mid]+A[i]<m)
                lft = mid+1;
            else
            {
                cout <<A[i]<<" "<<A[mid];
                return 0;
            }
            //cout<<lft<<" "<<mid<<" "<<rgt<<endl;
        }
    }
    cout<<"No";
    return 0;
}

