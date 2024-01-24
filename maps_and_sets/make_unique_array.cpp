#include <iostream>
#include <vector>
#include <set>

using namespace std;
int minElementsToRemove(vector<int> &arr)
{

	set<int> sets;
	for(int i=0;i<arr.size();i++){
		sets.insert(arr[i]);
	}
	return arr.size()-sets.size();
}

int minElementsToRemove(std::vector<int> &arr);

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 1, 2, 3};
    
    int result = minElementsToRemove(arr);

    cout << "Minimum elements to remove: " << result << std::endl;

    return 0;
}
