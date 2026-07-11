#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Function to print the matrix
void printMatrix(vector<vector<int>>& matrix) {
    for (auto row : matrix) {
        for (auto element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    cout << "\nRotated Matrix (90 degrees clockwise):\n";
    printMatrix(matrix);

    return 0;
}