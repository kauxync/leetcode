/*
 * Problem: LeetCode 921 - Minimum Add to Make Parentheses Valid
 * 
 * Explanation:
 * Track unmatched parentheses using two counters: open_needed for missing '('
 * and close_needed for unmatched '('. For each '(', increment close_needed.
 * For each ')', decrement close_needed if available; otherwise, increment open_needed.
 * Return open_needed + close_needed.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int minAddToMakeValid(char* s) {
    int open = 0;
    int insertions = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(') {
            open++;
        } 
        else {
            if (open > 0) {
                open--;
            } 
            else {
                // Need to insert '(' before this ')'
                insertions++;
            }
        }
    }

    // Remaining '(' need matching ')'
    return insertions + open;
}
