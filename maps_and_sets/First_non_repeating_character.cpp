#include <iostream>
#include <string>
#include  <unordered_map>
using namespace std;
char firstNonRepeatingCharacter(string str) {
  unordered_map<char, int> maps;
  int count = 0;

  for (int i = 0; i < str.size(); i++) {
    maps[str[i]]++;
  }
  for(int i=0;i<str.size();i++){
    if(maps[str[i]]<=1){
      return str[i];
      break;
    }
  }
  return str[0];
}

char firstNonRepeatingCharacter(std::string str);

int main() {
    string inputString = "programming";

    char result = firstNonRepeatingCharacter(inputString);

    cout << "First non-repeating character: " << result << std::endl;

    return 0;
}
