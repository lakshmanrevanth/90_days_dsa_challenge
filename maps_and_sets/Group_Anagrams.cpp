#include <iostream>
#include <vector> 
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // Write your code here.
    unordered_map <string,vector<string>> maps;
    for(auto word:inputStr){
        string sortword = word;
        sort(sortword.begin(),sortword.end());

        maps[sortword].push_back(word);
    }
    vector<vector<string>> result;
    for(auto &pair:maps){
        result.push_back(pair.second);
    }
    return result;
}


std::vector<std::vector<std::string>> getGroupedAnagrams(std::vector<std::string> &inputStr, int n);

int main() {
    std::vector<std::string> inputStrings = {"listen", "silent", "enlist", "hello", "world", "abc", "bca"};
    int n = inputStrings.size();

    std::vector<std::vector<std::string>> result = getGroupedAnagrams(inputStrings, n);

    for (const auto &group : result) {
        for (const auto &word : group) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
