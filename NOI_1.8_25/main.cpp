/*
25:螺旋加密
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
Chip和Dale发明了一种文本信息加密技术。他们事先秘密约定好矩阵的行数和列数。接着，将字符按如下方式编码：

1. 所有文本只包含大写字母和空格。

2. 每个字符均赋予一个数值：空格=0，A=1，B=2，……，Y=25，Z=26。

按照下图所示的方式，将每个字符对应数值的5位二进制数依次填入矩阵。最后用0将矩阵补充完整。例如，对于信息“ACM”，行列数均为4时，矩阵将被填充为：



将矩阵中的数字按行连起来形成数字串，完成加密。例子中的信息最终会被加密为：0000110100101100。

输入
一行。首先是两个整数R(1≤R≤20)和C(1≤C≤20)，表示行数和列数。之后是一个只包含大写字母和空格的字符串。字符串的长度≤(R*C)/5。R和C之间以及C和字符串之间均用单个空格隔开。
输出
一行，为加密后的二进制串。注意你可能需要用0将矩阵补充完整。

*/

#include <iostream>

using namespace std;

char A[25][25];
int  B[25][25], cnt;

string dict[26]={"00001","00010","00011","00100","00101","00110","00111",\
                 "01000","01001","01010","01011","01100","01101","01110",\
                 "01111","10000","10001","10010","10011","10100","10101",\
                 "10110","10111","11000","11001","11010"};

int main()
{
    int R, C;
    string str,plain="";
    cin>>R>>C;
    cin.get();
    getline(cin, str);

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
            plain += "00000";
        else
            plain += dict[str[i]-'A'];
    }
    //add 0
    for(int i=0;i<R*C-5*(str.size());i++)
        plain += '0';

    //A
    int i=0, j=0;
    while(cnt<R*C)
    {
        while(j<C&&!B[i][j])
        {
            A[i][j]=plain[cnt++];
            B[i][j]=1;
            j++;
        }
        j--;i++;

        while(i<R&&!B[i][j])
        {
            A[i][j]=plain[cnt++];
            B[i][j]=1;
            i++;
        }
        i--;j--;

        while(j>=0&&!B[i][j])
        {
            A[i][j]=plain[cnt++];
            B[i][j]=1;
            j--;
        }
        j++;i--;

        while(i>=0&&!B[i][j])
        {
            A[i][j]=plain[cnt++];
            B[i][j]=1;
            i--;
        }
        i++;j++;
    }

    //output
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cout<<A[i][j];
        }
    }

    return 0;
}
