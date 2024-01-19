
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
    int n = inputArray.size();

    for(int i=0;i<n;i++){
        reverse(inputArray[i].begin(),inputArray[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(inputArray[i][j],inputArray[j][i]);
        }
    }
}
int main() {
    // Example inputArray
    std::vector<std::vector<int>> inputArray = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:" << std::endl;
    for (const auto &row : inputArray) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    inplaceRotate(inputArray);

    std::cout << "\nRotated Matrix:" << std::endl;
    for (const auto &row : inputArray) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
