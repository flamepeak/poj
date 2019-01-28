/*
20:反反复复
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
Mo和Larry发明了一种信息加密方法。他们首先决定好列数，然后将信息（只包含字母）从上往下依次填入各列，并在末尾补充一些随机字母使其成为一个完整的字母矩阵。例如，若信息是“There's no place like home on a snowy night”并且有5列，Mo会写成：

t o i o y
h p k n n
e l e a i
r a h s g
e c o n h
s e m o t
n l e w x
注意Mo只会填入字母，且全部是小写形式。在这个例子中，Mo用字母“x”填充了信息使之成为一个完整的矩阵，当然他使用任何字母都是可以的。

Mo根据这个矩阵重写信息：首先从左到右写下第一行，然后从右到左写下第二行，再从左到右写下第三行……以此左右交替地从上到下写下各行字母，形成新的字符串。这样，例子中的信息就被加密为：toioynnkpheleaigshareconhtomesnlewx。

你的工作是帮助Larry从加密后的信息中还原出原始信息（包括填充的字母）。

输入
第一行包含一个整数（范围2到20），表示使用的列数。
第二行是一个长度不超过200的字符串。
输出
一行，即原始信息。

*/

#include<bits/stdc++.h>

using namespace std;

char A[200][200];

int main()
{
    int Col;
    cin>>Col;
    string str;
    cin>>str;
    int Row = str.size()/Col;
    int k=0;
    for(int i=0;i<Row;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<Col;j++)
            {
                A[i][j]=str[k++];
            }
        }
        else
        {
            for(int j=Col-1;j>=0;j--)
            {
                A[i][j]=str[k++];
            }
        }
    }
    //output
    for(int j=0;j<Col;j++)
    {
        for(int i=0;i<Row;i++)
        {
            cout<<A[i][j];
        }
    }



    return 0;
}

















/* 以下代码生成 密码串
#include <iostream>
#include <cstdio>

#define Col 5

using namespace std;

char arr[300];
char A[200][200];

int main()
{
    char ch;
    int i=0, j;
    while(scanf("%c", &ch) && ch !='\n')
    {
        if(ch>='a'&&ch<='z')
            arr[i++]=ch;
        else if(ch>='A'&&ch<='Z')
            arr[i++]=ch-'A'+'a';
    }
    int len = i;
    int Row;
    for(Row=1;Row<200;Row++)
    {
        if(Row*Col<len && (Row+1)*Col>len)
        {
            Row++;
            break;
        }
        if(Row*Col==len)
            break;
    }
    for(;i<Row*Col;i++)
        arr[i]='x';

    int k=0;
    for(j=0;j<Col;j++)
    {
        for(i=0;i<Row;i++)
        {
            A[i][j] = arr[k++];
        }
    }

    for(i=0;i<Row;i++)
    {
        for(j=0;j<Col;j++)
        {
            cout<<A[i][j];
        }
        //cout<<endl;
    }

    return 0;
}
*/
