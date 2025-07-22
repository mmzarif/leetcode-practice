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