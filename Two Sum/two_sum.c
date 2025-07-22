// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order. 

/*this is my thought process
find index of numer larger than target
use for loop that iterates until that index
use internal for loop for the second number
if sum is target, return indices
*/

#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }
    
    printf("No two sum solution found.\n");
    return -1;
}

//this code worked
// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
// Yes, we can use a hash map to achieve O(n) time complexity.
// However, since the prompt does not specify the use of additional data structures,
// the current solution is acceptable for the given constraints.
// Note: The code assumes that the input array has at least two elements and that there is exactly one solution.
// The code will print the indices of the two numbers that add up to the target value.
// The solution is efficient for small arrays, but for larger arrays, a hash map approach would be more optimal.
// The current solution has a time complexity of O(n^2) due to the nested loops.
// The space complexity is O(1) since we are not using any additional data structures that grow with input size.
// The code is written in C and uses standard input/output functions.
// The code can be compiled and run using a C compiler.
// The solution is straightforward and easy to understand, making it suitable for educational purposes.
// The code can be extended to handle edge cases, such as negative numbers or duplicate values, if needed.
// The solution is a good starting point for understanding the two-sum problem and can be optimized
// further with more advanced techniques like hash maps or sorting.
// The code is a simple implementation of the two-sum problem and can be used as a
// reference for similar problems in coding interviews or competitive programming.

