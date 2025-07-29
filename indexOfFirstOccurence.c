// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

// Approach: Use the standard library function strstr to find the first occurrence of needle in haystack.
#include <stdio.h>
#include <string.h>

int indexOfFirstOccurrence(char* haystack, char* needle) {
    char* ptr = strstr(haystack, needle);
    if (ptr) {
        return ptr - haystack;
    }
    return -1;
}