#include<iostream>
using namespace std;
void minrange(int a[],int n,int dp[][100])
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
    int m,l,r;
    cin>>m;
    minrange(a,n,dp);
    for(int i=0;i<m;i++){
        cin>>l>>r;
        cout<<a[dp[l][r]];
    }
} 