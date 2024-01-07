#include<bits/stdc++.h>
using namespace std;
void print_sub_matrix(int a[100][100],int m,int n)
{
    int s[m][n];
    for(int i=0;i<m;i++)
    {
        s[i][0]=a[i][0];
    }
    for(int i=0;i<n;i++)
    {
        s[0][i]=a[0][i];
    }
    int max=a[0][0];
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i][j])
            {
                s[i][j]=1+min({s[i-1][j],s[i][j-1],s[i-1][j-1]});
            }
            else{
                s[i][j]=0;
            }
        }
    }
    int x,y;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<s[i][j]){ 
                max=s[i][j];
                x=i-max+1;
                y=j-max+1;
                }

        }
    }
    cout<<max<<endl;
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++){ 
            cout<<"1 ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max==s[i][j])
            {
                cout<<i-max+1<<" "<<j-max+1;
            }
        }
    }
    for(int i=x;i<max+x;i++)
    {
        for(int j=y;j<max+y;j++)
        {
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }

}
int main()
{
    int a[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    print_sub_matrix(a,m,n);
    

}