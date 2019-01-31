/*
08:不重复地输出数
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
输入n个数，从小到大将它们输出，重复的数只输出一次。保证不同的数不超过500个。

输入
第一行是一个整数n。1 <= n <= 100000。
之后n行，每行一个整数。整数大小在int范围内。
输出
一行，从小到大不重复地输出这些数，相邻两个数之间用单个空格隔开。

*/


#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> ST;
    int n, temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ST.insert(temp);
    }
    set<int>::iterator iter;
    for(iter=ST.begin();iter!=ST.end();iter++)
    {
        cout<<*iter<<" ";
    }

    return 0;
}





/*
#include <iostream>
#include <algorithm>

using namespace std;

int A[100005];

int main()
{
    int n,temp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    sort(A+1, A+n+1);
    A[0] = 0;
    if(A[1]==0)
        cout<<0<<" ";
    for(int i=1;i<=n;i++)
    {

        if(A[i]!=A[i-1])
            cout<<A[i]<<" ";
    }
    return 0;
}
*/
