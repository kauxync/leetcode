/*
 * Problem: LeetCode 856 - Score of Parentheses
 * 
 * Explanation:
 * Track the nesting depth of parentheses. Every innermost "()" pair contributes
 * 2^(depth - 1) to the total score. When an opening bracket '(' is found,
 * increase depth. When a closing bracket ')' is immediately preceded by '(',
 * add 1 << (depth - 1) to the score, then decrease depth.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int scoreOfParentheses(char* s) {
    int stack[50];
    int top = 0;

    stack[0] = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(') {
            // Start a new level
            stack[++top] = 0;
        } 
        else {
            // Score of the current level
            int value = stack[top];

            top--;

            // () = 1, otherwise (A) = 2 * A
            if (value == 0)
                value = 1;
            else
                value *= 2;

            // Add score to the previous level
            stack[top] += value;
        }
    }

    return stack[0];
}
