#include<iostream>
using namespace std;

void minRangeValue(int n,int arr[],int dp[][100])
{
    for(int i=0;i<n;i++)
    {
        dp[i][i]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(arr[dp[i][j-1]]<arr[j])
            {
                dp[i][j]=dp[i][j-1];
            }
            else
            {
                dp[i][j]=j;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dp[n][100];
    minRangeValue(n,arr,dp);
    int m,l,u;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>l>>u;
        cout<<"min "<<arr[dp[l][u]]<<" ";

    }
}