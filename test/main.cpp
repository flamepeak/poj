#include <bits/stdc++.h>
using namespace std;

int A[2][2], B[2][2];

int main()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }
    copy(B, B+sizeof(B)/sizeof(int), A);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<A[i][j];
        }
    }
}
