/*
23:二维数组回形遍历
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按回形从外向内顺时针顺序遍历整个数组。如图所示：



输入
输入的第一行上有两个整数，依次为row和col。
余下有row行，每行包含col个整数，构成一个二维整数数组。
（注：输入的row和col保证0 < row < 100, 0 < col < 100）
输出
按遍历顺序输出每个整数。每个整数占一行。

*/


#include<bits/stdc++.h>
using namespace std;
int a[100][100],b[100][100],r,c,j=1,i=1,n;
int main()
{
    cin>>r>>c;
    for(i=1;i<=r;i++)
        for(j=1;j<=c;j++)
            cin>>a[i][j];
    i=1,j=1;
    while(n<r*c)
    {
        while(j<=c&&!b[i][j]){cout<<a[i][j]<<endl;b[i][j]=1;j++;n++;}j--;i++;
        while(i<=r&&!b[i][j]){cout<<a[i][j]<<endl;b[i][j]=1;i++;n++;}i--;j--;
        while(j>0&&!b[i][j]){cout<<a[i][j]<<endl;b[i][j]=1;j--;n++;}j++;i--;
        while(i>0&&!b[i][j]){cout<<a[i][j]<<endl;b[i][j]=1;i--;n++;}j++;i++;
    }
    return 0;
}
