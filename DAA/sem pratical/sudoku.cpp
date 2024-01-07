#include<bits/stdc++.h>
using namespace std;
#define N 9
int grid[N][N];

bool isSafe(int row,int col,int num)
{
    for(int x=0;x<N;x++)
    {
        if(grid[x][col]==num || grid[row][x]==num) return false;
    }
    int st_row=row-row%3;
    int st_col=col-col%3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i+st_row][j+st_col]==num) return false;
        }
    }
    return true;
}
bool solvesudoku(int row,int col)
{
    if(row==N-1 && col==N)
    {
        return true;
    }
    if(col==N)
    {
        row++;
        col=0;
    }
    for(int num=1;num<=N;num++)
    {
        if(isSafe(row,col,num))
        {
            grid[row][col]=num;
            if(solvesudoku(row,col+1)) return true;
        }
         grid[row][col]=0;
    }
    return false;
}
int main()
{
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>grid[i][j];
    if(solvesudoku(0,0)){
        cout<<"Solution exists"<<endl;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"No solution";
}