#include <iostream>

using namespace std;

const int MAX_VERTICES = 100;

class Graph {
private:
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
    bool visited[MAX_VERTICES];

public:
    // Constructor
    Graph(int vertices) {
        numVertices = vertices;
        // Initialize adjacency matrix and visited array
        for (int i = 0; i < numVertices; ++i) {
            visited[i] = false;
            for (int j = 0; j < numVertices; ++j) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    // Add edge (undirected)
    void addEdge(int u, int v) {
        if (u >= 0 && v >= 0 && u < numVertices && v < numVertices) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
    }

    // DFS traversal from a given vertex
    void DFS(int vertex) {
        visited[vertex] = true;
        cout << vertex << " ";

        for (int i = 0; i < numVertices; ++i) {
            if (adjMatrix[vertex][i] == 1 && !visited[i]) {
                DFS(i);
            }
        }
    }

    // Reset visited array (optional for multiple DFS runs)
    void resetVisited() {
        for (int i = 0; i < numVertices; ++i) {
            visited[i] = false;
        }
    }
};

int main() {
    int V = 5;
    Graph g(V);

    // Sample edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "DFS starting from vertex 0:\n";
    g.DFS(0);

    return 0;
}