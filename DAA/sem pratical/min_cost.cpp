#include<bits/stdc++.h>
using namespace std;
int mincost(int cost[100][100],int n,int m){
    
    for(int i=1;i<n;i++)
    {
        cost[i][0]+=cost[i-1][0];
    }
    for(int j=1;j<m;j++)
    {
        cost[0][j]+=cost[0][j-1];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            cost[i][j]+=min(cost[i][j-1],cost[i-1][j]);
        }
    }
    return cost[n-1][m-1];
}
int main()
{
    int cost[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            cin>>cost[i][j];
        }
    }
    cout<<mincost(cost,n,m);
}