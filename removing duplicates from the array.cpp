#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(vector<int>& arr) {
    // Sort the array
    sort(arr.begin(), arr.end());
    
    // Remove duplicates using unique and erase functions
     autoit = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    
    return arr;
}

int main() {
    // Create an empty vector
    vector<int> arr;
    
    // Use push_back to add elements
    arr.push_back(15);
    arr.push_back(14);
    arr.push_back(25);
    arr.push_back(14);
    arr.push_back(32);
    arr.push_back(14);
    arr.push_back(31);
    
    // Call the function to remove duplicates
    vector<int> result = removeDuplicates(arr);
    
    // Print the sorted array with unique elements
    cout << "Sorted Array = {";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "}" << endl;
    
    return 0;
}

