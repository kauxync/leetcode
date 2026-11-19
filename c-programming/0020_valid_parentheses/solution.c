/*
 * Problem: LeetCode 20 - Valid Parentheses
 * 
 * Explanation:
 * Push opening brackets ('(', '{', '[') onto a stack. When a closing bracket
 * is met, pop from the stack and verify that it matches the expected opening
 * bracket. The string is valid only if every bracket matches and the stack
 * is empty at the end.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool matched = (top == -1);
    free(stack);
    return matched;
}