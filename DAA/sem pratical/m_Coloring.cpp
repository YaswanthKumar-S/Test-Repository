#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>&graph,vector<int>&color,int vertex,int c)
{
    for(int i=0;i<graph.size();i++)
    {
        if(graph[vertex][i] && color[i]==c) return false;
    }
    return true;
}
bool mcoloringUtil(vector<vector<int>>&graph,vector<int>&color,int vertex,int m){
    if(vertex==graph.size()) return true;
    for(int c=1;c<=m;c++)
    {
        if(isSafe(graph,color,vertex,c))
        {
            color[vertex]=c;
            if(mcoloringUtil(graph,color,vertex+1,m)) return true;
        }
        color[vertex]=0;
    }
    return false;
}

int main()
{
    int N;
    cin>>N;
    vector<vector<int>> graph(N,vector<int>(N));
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>graph[i][j];
    vector<int> color(graph.size(),0);
    int m;
    cin>>m;
    if(mcoloringUtil(graph,color,0,m)){
        cout<<"Solution exists"<<endl;
        for(int i=0;i<color.size();i++) cout<<color[i]<<" ";
    }
    else cout<<"No solution ";
}