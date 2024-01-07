#include<iostream>
using namespace std;
#define N 9
void printsol(int grid[N][N])
{
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
bool isSafe(int grid[N][N],int row,int col,int num)
{
    for(int i=0;i<N;i++)
    {
        if(grid[row][i]==num || grid[i][col]==num)
        {
            return false;
        }
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
bool solveSudoku(int grid[N][N],int row,int col)
{
    if(row==N-1&&col==N) return true;
    if(col==N)
    {
        row++;
        col=0;
    }
    for(int num=1;num<=N;num++)
    {
        if(isSafe(grid,row,col,num)){ 
            grid[row][col]=num;
            if(solveSudoku(grid,row,col+1))
             return true;
        }
        grid[row][col]=0;
    }
    return false;
}
int main()
{
    int grid[N][N]={ { 0, 0, 0, 4, 1, 0, 8, 0, 0 },
					{ 0, 8, 0, 0, 0, 3, 0, 0, 0 },
					{ 0, 0, 4, 0, 0, 0, 1, 5, 6 },
					{ 0, 0, 6, 0, 0, 0, 2, 0, 0 },
					{ 2, 0, 0, 3, 0, 0, 0, 0, 4 },
					{ 7, 0, 3, 0, 0, 0, 0, 1, 0 },
					{ 0, 0, 0, 0, 4, 0, 0, 0, 0 },
					{ 5, 0, 1, 0, 7, 0, 0, 9, 8 },
					{ 6, 0, 0, 0, 0, 1, 0, 0, 0 } };
    
    if(solveSudoku(grid,0,0))
    {
        printsol(grid);
    }
    else{
        cout<<"No solution";
    }
}