// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order. 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

/*this is my thought process
find index of numer larger than target
use for loop that iterates until that index
use internal for loop for the second number
if sum is target, return indices
*/

#include <iostream> // for cout
#include <vector> // for vector
//I dont want to use std:: everytime
using namespace std;

int main() {
    vector<int> nums {2,7,11,15};
    int target = 9;

    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: [" << i << ", " << j << "]\n"; // << within [] means output in square brackets
                return 0;
            }
        }
    }
    cout << "No solution found.\n";
    return 0;
}