#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_VERTICES = 100; // Adjust this as needed

class Graph {
private:
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];

public:
    // Constructor
    Graph(int vertices) {
        numVertices = vertices;
        // Initialize all elements to 0
        for (int i = 0; i < numVertices; ++i)
            for (int j = 0; j < numVertices; ++j)
                adjMatrix[i][j] = 0;
    }

    // Add edge (undirected)
    void addEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
    }

    // Display the adjacency matrix
    void printAdjMatrix() {
        cout << "Adjacency Matrix:\n    ";
        for (int i = 0; i < numVertices; ++i)
            cout << setw(2) << i << " ";
        cout << "\n   ";
        for (int i = 0; i < numVertices; ++i)
            cout << "---";
        cout << endl;

        for (int i = 0; i < numVertices; ++i) {
            cout << setw(2) << i << "| ";
            for (int j = 0; j < numVertices; ++j) {
                cout << setw(2) << adjMatrix[i][j] << " ";
            }
            cout << endl;
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

    g.printAdjMatrix();

    return 0;
}