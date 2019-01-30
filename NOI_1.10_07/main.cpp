/*
07:合影效果
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
小云和朋友们去爬香山，为美丽的景色所陶醉，想合影留念。如果他们站成一排，男生全部在左（从拍照者的角度），并按照从矮到高的顺序从左到右排，女生全部在右，并按照从高到矮的顺序从左到右排，请问他们合影的效果是什么样的（所有人的身高都不同）？

输入
第一行是人数n（2 <= n <= 40，且至少有1个男生和1个女生）。
后面紧跟n行，每行输入一个人的性别（男male或女female）和身高（浮点数，单位米），两个数据之间以空格分隔。
输出
n个浮点数，模拟站好队后，拍照者眼中从左到右每个人的身高。每个浮点数需保留到小数点后2位，相邻两个数之间用单个空格隔开。

*/


#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

float A[50];

int cmp(float a, float b)
{
    return a>b;
}

int main()
{
    int n;
    cin>>n;
    string sex;
    int i=0, j=n-1;
    float height;
    for(int k=0;k<n;k++)
    {
        cin>>sex>>height;
        if(sex=="male")
            A[i++] = height;
        else
            A[j--] = height;
    }
    sort(A,A+i);
    sort(A+j+1, A+n, cmp);
    for(int k=0;k<n;k++)
        printf("%.2f ", A[k]);
    return 0;
}
