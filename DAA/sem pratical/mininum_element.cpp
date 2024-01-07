#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
void min_range(int a[],int n)
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
    min_range(a,n);
    int m,l,r;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        cout<<a[dp[l][r]];
    }
}