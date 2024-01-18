// You are given a square matrix, return true if the matrix is symmetric otherwise return false.

// A symmetric matrix is that matrix whose transpose is equal to the matrix itself.

// Example of symmetric matrix :


#include <iostream>
#include <vector>

bool isMatrixSymmetric(std::vector<std::vector<int>> matrix) {
    int temp2 = 0;
    std::vector<std::vector<int>> temp = matrix;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            temp2 = temp[i][j];
            temp[i][j] = temp[j][i];
            temp[j][i] = temp2;
        }
    }

    return temp == matrix;
}

int main() {
    // Example: Symmetric matrix
    std::vector<std::vector<int>> symmetricMatrix = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    // Example: Non-symmetric matrix
    std::vector<std::vector<int>> nonSymmetricMatrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Symmetric Matrix: " << isMatrixSymmetric(symmetricMatrix) << std::endl;
    std::cout << "Non-Symmetric Matrix: " << isMatrixSymmetric(nonSymmetricMatrix) << std::endl;

    return 0;
}