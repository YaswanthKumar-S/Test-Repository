#include<bits/stdc++.h>
using namespace std;
void printsol(int graph[][100],int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(graph[i][j]==999) cout<<"INF";
            else cout<<graph[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void floydWarshall(int graph[][100],int v)
{
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
    }
    printsol(graph,v);
}
int main()
{
    int v,e;
    cin>>v>>e;
    int graph[v][100];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++)
        {
            if(i==j) graph[i][j]=0;
            else graph[i][j]=999; 
        }      
    }
    for(int i=0;i<e;i++)
    {
        int source,dest,w;
        cin>>source>>dest>>w;
        graph[source][dest]=w;
        graph[dest][source]=w;
    }
    cout<<"Original Matrix"<<endl;
    printsol(graph,v);
    cout<<endl;
    cout<<"Shortest matrix"<<endl;
    floydWarshall(graph,v);
}