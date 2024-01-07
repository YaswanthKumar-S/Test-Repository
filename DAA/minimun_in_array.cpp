#include<iostream>
using namespace std;
void minimum_in_range(int n,int a[],int dp[][100])
{
    for(int i=0;i<n;i++)
    {
        dp[i][i]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[dp[i][j-1]]<a[j])
            {
                dp[i][j]=dp[i][j-1];
            }
            else{
                dp[i][j]=j;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int dp[n][100];
    minimum_in_range(n,a,dp);
    int m,l,u;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l>>u;
        cout<<"min of the range is "<<a[dp[l][u]]; 
    }
} 