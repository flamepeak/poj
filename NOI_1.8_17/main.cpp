/*
17:最好的草
查看 提交 统计 提问
总时间限制: 10000ms 单个测试点时间限制: 1000ms 内存限制: 65536kB
描述
奶牛Bessie计划好好享受柔软的春季新草。新草分布在R行C列的牧场里。它想计算一下牧场中的草丛数量。

在牧场地图中，每个草丛要么是单个“#”，要么是有公共边的相邻两个“#”。给定牧场地图，计算有多少个草丛。

例如，考虑如下5行6列的牧场地图

.#....
..#...
..#..#
...##.
.#....
这个牧场有5个草丛：一个在第一行，一个在第二列横跨了二、三行，一个在第三行，一个在第四行横跨了四、五列，最后一个在第五行。



输入
第一行包含两个整数R和C，中间用单个空格隔开。
接下来R行，每行C个字符，描述牧场地图。字符只有“#”或“.”两种。(1 <= R, C <= 100 )
输出
输出一个整数，表示草丛数。

*/

/* 思路
统计所有#的数量sum，然后统计所有公共边的数目cnt。
在统计公共边的数目时，为防止重复，只需要计算右侧和下侧的公共边
最终草丛的数量即为sum-cnt
*/
#include <iostream>

using namespace std;

char A[105][105];

int main()
{
    int R, C, sum=0,cnt=0;
    cin>>R>>C;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>A[i][j];
            if(A[i][j]=='#')
                sum++;
        }
    }

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(A[i][j]=='#' && j+1<=C-1 && A[i][j+1]=='#')
                cnt++;
            if(A[i][j]=='#' && i+1<=R-1 && A[i+1][j]=='#')
                cnt++;
        }
    }
    cout<<sum-cnt;

    return 0;
}
