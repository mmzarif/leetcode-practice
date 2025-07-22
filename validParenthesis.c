// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.


bool isValid(char* s) {

    int len = strlen(s);

    char stack[len];
    //int top = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[i] = s[i];
        
        else if (s[i] == ')' && stack[i-1] != '(' ||
        s[i] == '}' && stack[i-1] != '{' ||
        s[i] == ']' && stack[i-1] != '[')
            return false;

        else return true;
    }

    return true;
}

/**************gpt version
 * 
 * #include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];  // Stack to store opening brackets
    int top = -1;     // Stack pointer

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;  // Push
        } else {
            if (top == -1) return false;  // No matching opening bracket
            char topChar = stack[top--];  // Pop

            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return top == -1;  // All brackets matched
}
***************/