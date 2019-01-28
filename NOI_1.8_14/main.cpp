/*
14:扫雷游戏地雷数计算
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
扫雷游戏是一款十分经典的单机小游戏。它的精髓在于，通过已翻开格子所提示的周围格地雷数，来判断未翻开格子里是否是地雷。

现在给出n行m列的雷区中的地雷分布，要求计算出每个非地雷格的周围格地雷数。

注：每个格子周围格有八个：上、下、左、右、左上、右上、左下、右下。

输入
第一行包含两个整数n和m，分别表示雷区的行数和列数。1 <= n <= 100, 1 <= m <= 100。
接下来n行，每行m个字符，‘*’表示相应格子中是地雷，‘？’表示相应格子中无地雷。字符之间无任何分隔符。
输出
n行，每行m个字符，描述整个雷区。若相应格中是地雷，则用‘*’表示，否则用相应的周围格地雷数表示。字符之间无任何分隔符。

*/

#include <iostream>

using namespace std;

char matrix[105][105];

int main()
{
    int n, m, cnt;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cnt = 0;
            if(matrix[i][j]=='*')
                cout<<'*';
            else
            {
                if(i-1>=0&&j-1>=0&&matrix[i-1][j-1]=='*')
                    cnt++;
                if(i-1>=0&&matrix[i-1][j]=='*')
                    cnt++;
                if(i-1>=0&&j+1<=n-1&&matrix[i-1][j+1]=='*')
                    cnt++;
                if(j-1>=0&&matrix[i][j-1]=='*')
                    cnt++;
                if(j+1<=n-1&&matrix[i][j+1]=='*')
                    cnt++;
                if(i+1<=n-1&&j-1>=0&&matrix[i+1][j-1]=='*')
                    cnt++;
                if(i+1<=n-1&&matrix[i+1][j]=='*')
                    cnt++;
                if(i+1<=n-1&&j+1<=n-1&&matrix[i+1][j+1]=='*')
                    cnt++;
                cout<<cnt;
            }
        }
        cout<<endl;
    }
    return 0;
}
