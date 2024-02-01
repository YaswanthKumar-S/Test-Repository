#include<bits/stdc++.h>
using namespace std;
#define int N
bool isSafe(vector<vector<int>> & maze,int x,int y)
{
    return(x>=0 && y>=0 && x<N && y<N && maze[x][y]==1);
}

bool solvemazeutil(vector<vector<int>> & maze ,int x,int y,vector<vector<int>> &sol)
{
    if(x==N-1 && y==N-1){
        sol[x][y]=1;
        return true;
    }
    sol[x][y]=1;
    if(isSafe(maze,x+1,y) && solvemazeutil(maze,x+1,y,sol)) return true;
    if(isSafe(maze,x-1,y) && solvemazeutil(maze,x-1,y,sol)) return true;
    if(isSafe(maze,x,y+1) && solvemazeutil(maze,x,y+1,sol)) return true;
    if(isSafe(maze,x,y-1) && solvemazeutil(maze,x,y-1,sol)) return true;
    sol[x][y]=0;
}
int main(){
    cin>>N;
    vector<vector<int>> maze(N);

}