#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> graph(n,vector<int>(n));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>graph[i][j];
    vector<int> parent(n,-1);
    vector<int> key(n,INT_MAX);
    vector<bool> mst(n,false);

    parent[0]=-1;
    key[0]=0;

    for(int count =0;count<n-1;count++)
    {
        int u=-1;
        for(int i=0;i<n;i++)
        {
            if(!mst[i] && (u==-1 || key[i]<key[u]))
            {
                u=i;
            }
        }
        mst[u]=true;
        for(int v=0;v<n;v++)
        {
            if(graph[u][v] && !mst[v] && graph[u][v]<key[v])
            {
                parent[v]=u;
                key[v]=graph[u][v];
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<" - "<<i<<" "<<graph[i][parent[i]]<<endl;
    }
}