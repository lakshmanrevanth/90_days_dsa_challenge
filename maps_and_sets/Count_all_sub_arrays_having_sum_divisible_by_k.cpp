#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subArrayCount(vector<int> &arr, int k) {
    int count = 0;
    long long sum = 0;
    int rem = 0;
    unordered_map<int,int> maps;
    maps[0] = 1;
    
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        rem = sum % k;
        if(rem<0){
            rem += k;
        }
        if(maps.find(rem)!=maps.end()){
           count += maps[rem];
        }
        maps[rem]++;
    }
    return count;
}


int subArrayCount(std::vector<int> &arr, int k);

int main() {
    vector<int> inputArray = {4, 5, 0, -2, -3, 1};
    int k = 5;

    int result = subArrayCount(inputArray, k);

    cout << "Count of subarrays with sum divisible by " << k << ": " << result << std::endl;

    return 0;
}
