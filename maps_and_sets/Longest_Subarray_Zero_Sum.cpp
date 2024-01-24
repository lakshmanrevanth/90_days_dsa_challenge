#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
    int n=arr.size();
    int mx=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum==0){
        mx=max(mx,i+1);
      }
    if(mp.find(sum)!=mp.end()){
      mx=max(mx,i-mp[sum]);
    }
    else{
      mp[sum]=i;
    }
  }
  return mx;
}

int LongestSubsetWithZeroSum(std::vector<int> arr);

int main() {
   vector<int> inputArray = {4, 2, -3, 1, 6};

    int result = LongestSubsetWithZeroSum(inputArray);

  cout << "Length of the longest subset with zero sum: " << result << std::endl;

    return 0;
}
