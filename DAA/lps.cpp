#include<iostream>
#include<algorithm>
using namespace std;
int lps(string s,int n)
{
    string r=s;
    int a[n+1][n+1];
    reverse(r.begin(),r.end());
    for(int i=0;i<n;i++)
    {
        a[i][0]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1]==r[j-1])
            {
                a[i][j]=a[i-1][j-1]+1;
            }
            else
            {
                a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
    }
    cout<<a[n][n]<<endl;
    int index=a[n][n];
    string ans(index+1,'\0');
    int i=n,j=n;
    while(i>0 && j>0)
    {
        if(s[i-1]==r[j-1])
        {
            ans[index-1]=s[i-1];
            i--;
            j--;
            index--;
        }
        else if(a[i-1][j]<a[i][j-1])
        {
            i--;
        }
        else{
            j--;
        }
    }
    cout<<ans;


}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    lps(s,n);
}