// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int row,col;
int arr[100][100];
vector<pair<int,int>> path;
int mincost()
{
    for(int j=1;j<col;j++){
        arr[0][j]=arr[0][j-1]+arr[0][j];
    }
    for(int j=1;j<row;j++){
        arr[j][0]=arr[j-1][0]+arr[j][0];
    }
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            arr[i][j]+=min(arr[i-1][j],arr[i][j-1]);
        }
    }
    int r=row-1;
    int c=col-1;
    path.push_back({r,c});
    while(r>0 ||c>0)
    {
        int left=INT_MAX;
        int right=INT_MAX;
        if(r-1>=0)
        {
            left=arr[r-1][c];
        }
        
        if(c-1>=0)
        {
            right=arr[r][c-1];
        }
        if(left<right)
            r--;
        else
            c--;
        
        path.push_back({r,c});
    }
    return arr[row-1][col-1];
}
int main()
{
    cin>>row>>col;
    for(int i=0;i,row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Minimum Cost:"<<mincost()<<endl;
    cout<<"Sum of the Cell : "<<endl;
    reverse(path.begin(),path.end());
    for(auto num:path)
    {
        cout<<num.first+num.second<<" ";
    }
}
