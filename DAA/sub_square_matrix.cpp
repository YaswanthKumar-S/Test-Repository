#include<bits/stdc++.h>
using namespace std;
void printsubmatrix(int matrix[100][100],int r,int c)
{
    int S[r][c];
    int max=0;
    for(int i=0;i<r;i++)
    {
        S[i][0]=matrix[i][0];
    }
    for(int j=0;j<c;j++)
    {
        S[0][j]=matrix[0][j];
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(matrix[i][j])
            {
                S[i][j]=min({S[i][j-1],S[i-1][j],S[i-1][j-1]})+1;
            }
            else
                S[i][j]=0;
            //]
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(max<S[i][j])
            {
                max=S[i][j];
            }
        }
    }
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
        {
            cout<<"1 ";
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    int matrix[100][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>matrix[i][j];
        }
    }
    printsubmatrix(matrix,r,c);
}
