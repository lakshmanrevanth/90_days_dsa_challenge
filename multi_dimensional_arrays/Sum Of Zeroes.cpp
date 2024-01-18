
#include <algorithm>
#include <istream>
#include <iostream>
int calculate(int i,int j,vector<vector<int>> &matrix,int r, int c){
    int count =0;
    if(j>0&&matrix[i][j-1]==1){
            count++;
    }
    if(j<c-1&&matrix[i][j+1]==1){
            count++;
    }
    if(i>0&&matrix[i-1][j]==1){
            count++;
    }
    if(i<r-1&&matrix[i+1][j]==1){
            count++;
    }
    return count;
}
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int result = 0;
    int r = mat.size();
    int c = mat[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==0){
                result += calculate(i,j,mat,r,c);
            }
        }
    }
    return result;
}
