#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize == 0) return "";

    // Use the first string as reference
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                strs[0][i] = '\0'; // truncate at mismatch
                return strs[0];
            }
        }
    }

    return strs[0];
}