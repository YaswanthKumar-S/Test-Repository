#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& graph, vector<int>& color, int vertex, int c) {
    for (int i = 0; i < graph.size(); i++) {
        if (graph[vertex][i] && color[i] == c) {
            return false;
        }
    }
    return true;
}

bool graphColoring(vector<vector<int>>& graph, vector<int>& color, int vertex, int m) {
    if (vertex == graph.size()) {
        return true;
    }
    for (int i = 1; i <= m; i++) {
        if (isSafe(graph, color, vertex, i)) {
            color[vertex] = i;
            if (graphColoring(graph, color, vertex + 1, m)) {
                return true;
            }
            color[vertex] = 0;
        }
    }
    return false;
}

int main() {
    //vector<vector<int>> matrix(rows, vector<int>(cols));
    int V;
    cin>>V;
    vector<vector<int>> graph (V,vector<int>(V));
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
        {
            cin>>graph[i][j];
        }
    }
    int m;
    cin>>m;
    vector<int> color(graph.size(), 0);
    if (graphColoring(graph, color, 0, m)) {
        cout << "Solution exists: ";
        for (int i = 0; i < color.size(); i++) {
            cout << color[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Solution does not exist." << endl;
    }
    return 0;
}
