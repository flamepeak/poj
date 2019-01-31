/*
01:查找最接近的元素
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
在一个非降序列中，查找与给定值最接近的元素。

输入
第一行包含一个整数n，为非降序列长度。1 <= n <= 100000。
第二行包含n个整数，为非降序列各元素。所有元素的大小均在0-1,000,000,000之间。
第三行包含一个整数m，为要询问的给定值个数。1 <= m <= 10000。
接下来m行，每行一个整数，为要询问最接近元素的给定值。所有给定值的大小均在0-1,000,000,000之间。
输出
m行，每行一个整数，为最接近相应给定值的元素值，保持输入顺序。若有多个值满足条件，输出最小的一个。

*/

#include<bits/stdc++.h>
using namespace std;
int n,m,lft,rgt,val,cur,num[100010],i;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>num[i];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>val;
        lft=0,rgt=n-1;
        while(lft+1<rgt)
        {
            cur=(lft+rgt)/2;
            if(num[cur]>val)
                rgt=cur;
            else
                lft=cur;
        }
        if((num[rgt]-val)<(val-num[lft]))
            cout<<num[rgt]<<endl;
        else
            cout<<num[lft]<<endl;
    }
return 0;
}
