#include<bits/stdc++.h>
using namespace std;
int N;
const int dx[]={2,1,-1,-2,-2,-1,1,2};
const int dy[]={1,2,2,1,-1,-2,-2,-1};
int board[100][100];
void printsol()
{
    cout<<"solution exists";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<board[i][j]<<" ";  
        }
    cout<<endl;
    }
}
bool isSafe(int x,int y)
{
    return (x>=0 && x<N && y>=0 && y<N && board[x][y]==-1);
}
bool knight_tour(int x,int y,int move)
{
    if(move==N*N) return true;
    for(int i=0;i<8;i++)
    {
        int next_x=x+dx[i];
        int next_y=y+dy[i];
        if(isSafe(next_x,next_y)){
            board[next_x][next_y]=move;
            if(knight_tour(next_x,next_y,move+1)) return true;
            board[next_x][next_y]=-1;
        }
    }
    return false;
}
int main(){
    cin>>N;
    memset(board,-1,sizeof(board));
    board[0][0]=0;
    if(knight_tour(0,0,1)){
        printsol();
    }
    else cout<<"No solution";
}