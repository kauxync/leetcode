/*
 * Problem: LeetCode 14 - Longest Common Prefix
 * 
 * Explanation:
 * Compare characters column by column across all strings starting from index 0.
 * As soon as a character mismatch or the end of a string is encountered,
 * allocate and return the prefix collected so far.
 * 
 * Time Complexity: O(S), where S is the sum of all characters in the strings
 * Space Complexity: O(1)
 */

#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";

    for (int i = 0; strs[0][i] != '\0'; i++) {

        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}
