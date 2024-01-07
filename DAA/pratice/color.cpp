#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> & graph,vector<int> & color,int vertex,int c)
{
    for(int i=0;i<graph.size();i++)
    {
        if(graph[vertex][i] && color[i]==c) return false;
    }
    return true;
}
bool coloringUtil(vector<vector<int>> & graph,vector<int> & color,int vertex,int m)
{
    if(vertex==graph.size()) return true;
    for(int i=0;i<m;i++)
    {
        if(isSafe(graph,color,vertex,i))
        {
            color[vertex]=i;
            if(coloringUtil(graph,color,vertex+1,m))
                return true;
            color[vertex]=0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> graph(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }
    }
    int m;
    cin>>m;
    vector<int> color(m);
    for(int i=0;i<m;i++) color[i]=0;
    if(coloringUtil(graph,color,0,m))
        cout<<"Solution exists";
    else cout<<"no solution";
}