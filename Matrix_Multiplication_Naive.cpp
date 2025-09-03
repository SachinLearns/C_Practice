#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 3; // size of square matrices (n x n)

    // Properly initialized 3x3 matrices
    vector<vector<int>> A = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    vector<vector<int>> B = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};

    vector<vector<int>> C(n, vector<int>(n, 0)); // result matrix

    // Matrix multiplication
    for (int i = 0; i < n; i++) {          // row of A
        for (int j = 0; j < n; j++) {      // column of B
            for (int k = 0; k < n; k++) {  // loop for multiplication & sum
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
