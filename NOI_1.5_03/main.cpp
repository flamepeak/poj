#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    float sum = 0.0, avg, temp;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        scanf("%f", &temp);
        sum += temp;
    }
    avg = sum/n;
    printf("%.4f", avg);
    return 0;
}
