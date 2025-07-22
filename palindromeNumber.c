// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }
    
    // Convert the integer to a string
    char str[12]; // Enough to hold int32_t max value
    sprintf(str, "%d", x);
    
    // Check if the string is a palindrome
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    
    return true;
}
    

//Follow up: Could you solve it without converting the integer to a string?