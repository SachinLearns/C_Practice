#include <iostream>
#include <queue>

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

    // BFS traversal from a given vertex
    void BFS(int startVertex) {
        queue<int> q;
        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int i = 0; i < numVertices; ++i) {
                if (adjMatrix[current][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }

    // Reset visited array (for multiple runs)
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

    cout << "BFS starting from vertex 0:\n";
    g.BFS(0);

    return 0;
}
