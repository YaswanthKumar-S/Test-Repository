#include<bits/stdc++.h>
using namespace std;
int N;
int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int board[100][100];
void printsol()
{
    cout<<"Solution exists"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(int x,int y )
{
    return(x>=0 && y>=0 && x<N && y<N && board[x][y]==-1);
}
bool knighttour(int x,int y,int move)
{
    if(move==N*N) return true;
    for(int i=0;i<N;i++)
    {
        int next_x=x+dx[i];
        int next_y=y+dy[i];
        if(isSafe(next_x,next_y))
        {
            board[next_x][next_y]=move;
            if(knighttour(next_x,next_y,move+1))
            {
                return true;
            }
            board[next_x][next_y]=-1;
        }
    }
    return false;
}
int main()
{
    cin>>N;
    memset(board,-1,sizeof(board));
    board[0][0]=0;
    if(knighttour(0,0,1)){
        printsol();
    }
    else{
        cout<<"No solution";
    }
}