#include<bits/stdc++.h>
using namespace std;
int V;
bool graph[100][100];
bool isSafe(int v,int path[],int pos)
{
    if(graph[path[pos-1]][v]==0) return false;
    for(int i=0;i<pos;i++) if(path[i]==v) return false;
    return true;
}
bool hamiltonianUtil(int path[],int pos)
{
    if(pos==V)
    {
        if(graph[path[pos-1]][0]==true) return true;
        else return false;
    }
    for(int v=1;v<V;v++)
    {
        if(isSafe(v,path,pos))
        {
            path[pos]=v;
            if(hamiltonianUtil(path,pos+1)) return true;
            path[pos]=-1;
        }
    }
    return false;
}
bool ham(){
    int path[V];
    memset(path,-1,sizeof(path));
    path[0]=0;
    if(hamiltonianUtil(path,1)){
        cout<<"Solution exists"<<endl;
        for(int i=0;i<V;i++){
            cout<<path[i]<<" ";
        }
        cout<<path[0];

    }
    else cout<<"No solution" ;

}
int main(){
    cin>>V;
    for(int i=0;i<V;i++) for(int j=0;j<V;j++) cin>>graph[i][j];
    ham();
}