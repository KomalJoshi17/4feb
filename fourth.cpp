#include <iostream>
#include <vector>
using namespace std;

int maxDiagonalSum(const vector<vector<int>>& mat, int N) {
    int maxSum = 0;
    for (int i = 0; i < N; ++i) {
        int row = 0, col = i;
        int sum1 = 0, sum2 = 0;
        while (col < N && row < N) {
            sum1 += mat[row][col]; // Sum of main diagonal
            sum2 += mat[col][row]; // Sum of secondary diagonal
            row++;
            col++;
        }
        maxSum = max(maxSum, max(sum1, sum2));
    }
    return maxSum;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> mat(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> mat[i][j];
        }
    }

    int result = maxDiagonalSum(mat, N);
    cout << result << endl;

    return 0;
}