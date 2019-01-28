/*
29:ISBN号码
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
每一本正式出版的图书都有一个ISBN号码与之对应，ISBN码包括9位数字、1位识别码和3位分隔符，其规定格式如“x-xxx-xxxxx-x”，其中符号“-”是分隔符（键盘上的减号），最后一位是识别码，例如0-670-82162-4就是一个标准的ISBN码。ISBN码的首位数字表示书籍的出版语言，例如0代表英语；第一个分隔符“-”之后的三位数字代表出版社，例如670代表维京出版社；第二个分隔之后的五位数字代表该书在出版社的编号；最后一位为识别码。

识别码的计算方法如下：

首位数字乘以1加上次位数字乘以2……以此类推，用所得的结果mod 11，所得的余数即为识别码，如果余数为10，则识别码为大写字母X。例如ISBN号码0-670-82162-4中的识别码4是这样得到的：对067082162这9个数字，从左至右，分别乘以1，2，…，9，再求和，即0×1+6×2+„„+2×9=158，然后取158 mod 11的结果4作为识别码。

你的任务是编写程序判断输入的ISBN号码中识别码是否正确，如果正确，则仅输出“Right”；如果错误，则输出你认为是正确的ISBN号码。

输入
只有一行，是一个字符序列，表示一本书的ISBN号码（保证输入符合ISBN号码的格式要求）。
输出
共一行，假如输入的ISBN号码的识别码正确，那么输出“Right”，否则，按照规定的格式，输出正确的ISBN号码（包括分隔符“-”）。
*/

#include <iostream>

using namespace std;

int main()
{
    string a,b="0123456789X";
    int c=0,t=1,i,j;
    cin>>a;
    for(i=0;i<12;i++)
    {
        if(a[i]=='-')
        {
            continue;
        }
        c+=(a[i]-'0')*t++;
    }
    if(b[c%11]==a[12])
        cout<<"Right"<<endl;
    else
    {
        a[12]=b[c%11];
        cout<<a<<endl;
    }
    return 0;
}

/*
int main()
{
    string str;
    cin>>str;
    int val = 0, j=1;
    val = (int)(str[0]-'0')*1+(int)(str[2]-'0')*2+(int)(str[3]-'0')*3+(int)(str[4]-'0')*4+(int)(str[6]-'0')*5+(int)(str[7]-'0')*6+(int)(str[8]-'0')*7+(int)(str[9]-'0')*8+(int)(str[10]-'0')*9;
    val %= 11;

    if(val != 10)
    {
        if(val == (int)(str[str.size()-1]-'0'))
        {
            cout<<"Right";
            return 0;
        }
        else
        {
            for(int i=0;i<=str.size()-2;i++)
                cout<<str[i];
            cout<<val;
        }
    }
    else
    {
        if('X' == str[str.size()-1])
        {
            cout<<"Right";
            return 0;
        }
        else
        {
            for(int i=0;i<=str.size()-2;i++)
                cout<<str[i];
            cout<<"X";
        }
    }

    return 0;
}
*/
