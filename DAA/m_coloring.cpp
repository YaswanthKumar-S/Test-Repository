#include <iostream>
using namespace std;

const int V = 4; // The number of vertices in the graph

// Utility function to check if it's safe to color a vertex with a specific color
bool isSafe(int v, int color[], bool graph[V][V], int c) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && color[i] == c) {
            return false;
        }
    }
    return true;
}

// Recursive function to perform graph coloring using backtracking
bool graphColoringUtil(bool graph[V][V], int m, int color[], int v) {
    // If all vertices are colored, we have a valid coloring
    if (v == V) {
        return true;
    }

    // Try different colors for the current vertex
    for (int c = 1; c <= m; c++) {
        // Check if it's safe to assign color 'c' to vertex 'v'
        if (isSafe(v, color, graph, c)) {
            color[v] = c;

            // Recur for the next vertex
            if (graphColoringUtil(graph, m, color, v + 1)) {
                return true;
            }

            // If assigning color 'c' doesn't lead to a valid coloring, backtrack
            color[v] = 0;
        }
    }

    // If no color can be assigned to this vertex, return false
    return false;
}

// Main function for graph coloring
void graphColoring(bool graph[V][V], int m) {
    int color[V]; // An array to store the colors assigned to vertices
    for (int i = 0; i < V; i++) {
        color[i] = 0; // Initialize all vertices with no color (0)
    }

    if (graphColoringUtil(graph, m, color, 0)) {
        cout << "Graph can be colored with at most " << m << " colors. The coloring is:" << endl;
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " is colored with color " << color[i] << endl;
        }
    } else {
        cout << "Graph cannot be colored with " << m << " colors." << endl;
    }
}

int main() {
    // Example graph represented as an adjacency matrix
    bool graph[V][V] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };
    int m = 3; // Maximum number of colors

    graphColoring(graph, m);

    return 0;
}
