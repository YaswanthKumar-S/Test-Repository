#include<bits/stdc++.h>
using namespace std;
bool isSafe(int vertex,vector<vector<int>>&graph,vector<int>&color,int c)
{
    for(int i=0;i<graph.size();i++){
        if(graph[vertex][i]&& color[i]==c)
        {
            return false;
        }
    }
    return true;
}

bool graphcoloring(vector<vector<int>>&graph,vector<int>&color,int m,int vertex){
    if(vertex==graph.size()) return true;
    for(int i=1;i<=m;i++){
        if(isSafe(vertex,graph,color,i))
        {
            color[vertex]=i;
            if(graphcoloring(graph,color,m,vertex+1)) return true;
            color[vertex]=0;
        }
    }
    return false;
}
int main(){
    int V;
    cin>>V;
    vector<vector<int>> graph(V,vector<int>(V));
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cin>>graph[i][j];
        }
    }
    int m;
    cin>>m;
    vector<int> color(graph.size(),0);
    if(graphcoloring(graph,color,m,0))
    {
        cout<<"Solution exists";
        for(int i=0;i<color.size();i++)
        {
            cout<<color[i]<<" ";
        }
    }
    else{
        cout<<"no solution exists";
    }

}