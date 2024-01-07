#include<iostream>
using namespace std;

# define N 9  // defining the size of sudoku 
void print(int grid [N][N])
// printing the solution of sudoku 
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<< grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
//to check the given space is safe or not
bool isSafe(int grid[N][N],int row,int col,int num)
{
    for(int x=0;x<=8;x++)
    {
        // check the rows if they have the same values
        if(grid[row][x]==num)
            return false;
    }

    for(int y=0;y<=8;++y)
    {
        //check the colums they have same values or not
        if(grid[y][col]==num)
        {
            return 0;
        }
    }
// to check the subgrid is repeats a value or not 
    int start_row= row - row%3;
    int start_column=col - col%3;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i+start_row][j+start_column]==num)
                return 0;
        }
    } 
    return true;
}

bool solveSudoku(int grid[N][N],int row,int col)
{
    if(row ==N-1 && col==N)
    {
        return 1;
    }

    if(col==N)
    {
        row++;
        col=0;
    }

    if(grid[row][col] > 0)
        return solveSudoku(grid,row,col+1);

    for(int num=1;num<=9;num++)
    {
        if(isSafe(grid,row,col,num)){

            grid[row][col]=num;

            if(solveSudoku(grid,row,col+1))
            {
                return 1;
            }
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
        print(grid);
    else cout<<"No solution exists";
}