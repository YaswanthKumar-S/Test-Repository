#include<bits/stdc++.h>
using namespace std;
#define N 8
int board[N][N];
const int dx[]={2,1,-1,-2,-2,-1,1,2};
const int dy[]={1,2,2,1,-1,-2,-2,-1};

bool isSafe(int x,int y,int board[N][N])
{
    return (x>=0 && x<N && y>=0 && y<N && board[x][y]==-1);
}
void print(int board[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool knighttour(int x,int y,int move,int board[N][N])
{
    if(move==N*N)
        return true;
    
    for(int i=0;i<8;i++)
    {
        int nextx=x+dx[i];
        int nexty=y+dy[i];

        if(isSafe(nextx,nexty,board)){
            board[nextx][nexty]=move;
            if(knighttour(nextx,nexty,move+1,board)) 
                return true;
            board[nextx][nexty]=-1;
        }
    }
    return false;
}
int main()
{
    
    int board[N][N];
   memset(board,-1,sizeof(board));
    board[0][0]=0;
    if(knighttour(0,0,1,board))
        print(board);
    else cout<<"No solution exits";
}