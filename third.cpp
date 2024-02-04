#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> waterReflection(const vector<vector<int>>& matrix) {
    int N = matrix.size();
    int M = matrix[0].size();

    // Create an empty result matrix
    vector<vector<int>> result(N, vector<int>(M));

    // Reflect the top half of the matrix to the bottom half
    for (int i = 0; i < N / 2; ++i) {
        result[i] = matrix[N - i - 1];
    }

    // Reflect the bottom half of the matrix to the top half
    for (int i = N / 2; i < N; ++i) {
        result[i] = matrix[N - i - 1];
    }

    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Get the water reflection of the matrix
    vector<vector<int>> reflectedMatrix = waterReflection(matrix);

    // Print the reflected matrix
    for (const auto& row : reflectedMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}