/*
05:计算鞍点
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25

输入
输入包含一个5行5列的矩阵
输出
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"

*/




int matrix[6][6];
int Max, Min, h=0, l=0, cnt=0;
bool flag = true;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cin>>matrix[i][j];
    }
    for(int i=0;i<5;i++)
    {
        flag = true;
        Max = matrix[i][0];
        h = i;l=0; //必须设定初始值
        for(int j=0;j<5;j++)
        {
            if(Max<matrix[i][j])//求行的最大值
            {
                Max = matrix[i][j];
                h = i;
                l = j;
            }
        }
        //cout<<h<<" "<<l<<" "<<Max<<endl;
        for(int k=0;k<5;k++)
        {
            if(matrix[k][l]<Max)//判断是否为列最小值
            {
                //cout<<matrix[k][l]<<" "<<Max<<endl;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<h+1<<" "<<l+1<<" "<<Max<<endl;
            cnt++;
        }
    }
    if(cnt==0)
        cout<<"not found";
    return 0;
}
