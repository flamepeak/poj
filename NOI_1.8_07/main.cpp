/*
07:矩阵归零消减序列和
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个n*n的矩阵（3 <= n <= 100，元素的值都是非负整数）。通过(n-1)次实施下述过程，可把这个矩阵转换成一个1*1的矩阵。每次的过程如下：

首先对矩阵进行行归零：即对每一行上的所有元素，都在其原来值的基础上减去该行上的最小值，保证相减后的值仍然是非负整数，且这一行上至少有一个元素的值为0。

接着对矩阵进行列归零：即对每一列上的所有元素，都在其原来值的基础上减去该列上的最小值，保证相减后的值仍然是非负整数，且这一列上至少有一个元素的值为0。

然后对矩阵进行消减：即把n*n矩阵的第二行和第二列删除，使之转换为一个(n-1)*(n-1)的矩阵。

下一次过程，对生成的(n-1)*(n-1)矩阵实施上述过程。显然，经过(n-1)次上述过程， n*n的矩阵会被转换为一个1*1的矩阵。

请求出每次消减前位于第二行第二列的元素的值。




输入
第一行是一个整数n。
接下来n行，每行有n个正整数，描述了整个矩阵。相邻两个整数间用单个空格分隔。
输出
输出为n行，每行上的整数为对应矩阵归零消减过程中，每次消减前位于第二行第二列的元素的值。
*/



/*注意

以下摘录各大佬的讨论
首先这道题属于错题
理论上n=1时根本不会有第2行第2列
但这道题却出现了第n个输出
其实这个输出只不过是将倒数第2个输出的数据再输出一次罢了
而样例中的最后一行输出恰好为0
结果就坑了一堆人


*/




#include <iostream>

using namespace std;

int m[105][105];

//subAndKeep 返回a=a-b,若a小于0，则a=0
int subAndKeep(int a, int b)
{
    if(a==0)
        return 0;
    else if(a>=b)
        return (a-b);
    else
    {
        cout<<"Error"<<endl;
        return 0;
    }

}

int main()
{
    int n, minVal;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>m[i][j];
    }

    int cnt=1;
    while(cnt<=n-1)
    {
        //output
        cout<<m[cnt][cnt]<<endl;
        //行归零
        //row 0
        minVal = m[0][0];
        for(int j=cnt;j<n;j++)
        {
            if(minVal>m[0][j])
                minVal = m[0][j];
        }
        m[0][0] = subAndKeep(m[0][0], minVal);
        for(int j=cnt;j<n;j++)
            m[0][j] = subAndKeep(m[0][j], minVal);

        //row cnt -- (n-1)
        for(int i=cnt;i<n;i++)
        {
            minVal = m[i][0];
            for(int j=cnt;j<n;j++)
            {
                if(minVal>m[i][j])
                    minVal = m[i][j];
            }
            m[i][0] = subAndKeep(m[i][0], minVal);
            for(int j=cnt;j<n;j++)
                m[i][j] = subAndKeep(m[i][j], minVal);
        }

        //列归零
        //col 0
        minVal = m[0][0];
        for(int i=cnt;i<n;i++)
        {
            if(minVal>m[i][0])
                minVal = m[i][0];
        }
        m[0][0] = subAndKeep(m[0][0], minVal);
        for(int i=cnt;i<n;i++)
            m[i][0] = subAndKeep(m[i][0], minVal);

        //col cnt -- (n-1)
        for(int j=cnt;j<n;j++)
        {
            minVal = m[0][j];
            for(int i=cnt;i<n;i++)
            {
                if(minVal>m[i][j])
                    minVal = m[i][j];
            }
            m[0][j] = subAndKeep(m[0][j], minVal);
            for(int i=cnt;i<n;i++)
                m[i][j] = subAndKeep(m[i][j], minVal);
        }


        cnt++;
    }
    //output
    cout<<m[cnt-1][cnt-1]<<endl;

    return 0;
}
