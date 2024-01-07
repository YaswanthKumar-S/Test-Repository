#include<iostream>
using namespace std;

const int V=4;
bool isSafe(int v, int graph[V][V], int color[], int c){
    for(int i=0; i<V; i++){
        if(graph[v][i]==1 && c==color[i]){
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int graph[V][V], int m, int color[], int v){
    if(v==V) return true;
    for(int c=1; c<=m; c++){
        if(isSafe(v,graph,color, c)){
            color[v]=c;
            if(graphColoringUtil(graph, m, color, v+1)) return true;
            color[v] = 0;
        }
    }
    return false;
}


void printSolution(int color[]){
    cout<<"Solution Exists:"<<endl;
    for(int i=0; i<V; i++) cout<<color[i]<<" ";
    cout<<endl;
}

int main(){
    int graph[V][V];
    int m,i,j;
    int color[V];
    for(i=0; i<V; i++){
        for(j=0; j<V; j++){
            cin>>graph[i][j];
        }
    }
    cin>>m;
    for(i=0; i<V;i++) color[i]=0;
    if(graphColoringUtil(graph, m, color, 0)){
        printSolution(color);
    }
    else cout<<"Solution does not exist";
}