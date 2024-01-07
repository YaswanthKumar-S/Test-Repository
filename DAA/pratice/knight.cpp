#include<bits/stdc++.h>
using namespace std;
const int dx[]={2,1,-2,-1,-2,-1,2,1};
const int dy[]={1,2,2,1,-1,-2,-2,-1};
int n,board[100][100];
bool isSafe(int x,int y,int board[100][n])
{
    return(x>=0 &&y>=0 && x<n && y<n && board[x][y]==-1);
}
bool solveknight(int x,int y,int move,int board[n][n])
{
    if(move == n*n) return true;
    for(int i=0;i<8;i++)
    {
        int next_x=x+dx[i];
        int next_y=y+dy[i];
        if(isSafe(next_x,next_y,board))
        {
            board[next_x][next_y]=move;
            if(solveknight(next_x,next_y,move+1,board))
                return true;
            board[next_x][next_y]=-1;
        }
    }
    return false;
}
int main()
{
    cin>>n;
    memset(board,-1,sizeof(board));
    board[0][0]=0;
    if(solveknight(0,0,1,board)){
        cout<<"Solution exists"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"solution no ";
    }
}
