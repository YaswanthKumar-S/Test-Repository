#include<bits/stdc++.h>
using namespace std;
void lps(string s)
{
    int n=s.size();
    string r=s;
    string rev=s;
    reverse(rev.begin(),rev.end());
    int arr[n+1][n+1];
    memset(arr,0,sizeof
    (arr));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(r[i-1]==rev[j-1])
                arr[i][j]=1+arr[i-1][j-1];
            else
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
        }
    }
    cout<<"Length of the Subsequence is : "<<arr[n][n]<<endl;
    
    int index=arr[n][n];
    string output(index+1,'\0');
    int i=n,j=n;
    while(i>0 && j>0)
    {
        if(r[i-1]==rev[j-1])
        {
            output[index-1]=r[i-1];
            i--;
            j--;
            index--;
        }
        else if(arr[i-1][j]>arr[i][j-1])
        {
            i--;
        }
        else{
            j--;
        }
    }
    cout<<"The subsequence is : "<<output;
    
}
int main()
{
    string s;
    cin>>s;
    lps(s);
}