#include<bits/stdc++.h>
using namespace std;
int mincost(int cost[100][100],int r,int c)
{
    for(int i=1;i<r;i++)
    {
        cost[i][0]+=cost[i-1][0];
    }
    for(int j=1;j<c;j++)
    {
        cost[0][j]+=cost[0][j-1];
    }
    for(int i=1;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            cost[i][j]+=min(cost[i-1][j],cost[i][j-1]);
        }
    }
    return cost[r-1][c-1];
}
int main()
{
    int cost[100][100];
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<mincost(cost,r,c);
}