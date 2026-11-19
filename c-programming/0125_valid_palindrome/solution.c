/*
 * Problem: LeetCode 125 - Valid Palindrome
 * 
 * Explanation:
 * Place two pointers at both ends of the string. Skip non-alphanumeric
 * characters using isalnum(), then compare characters case-insensitively
 * with tolower(). If any pair does not match, return false.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

bool isPalindrome(char* s) {
    int left = 0;
    int right = 0;

    while (s[right] != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) {
            left++;
        }
        while (left < right && !isalnum((unsigned char)s[right])) {
            right--;
        }

        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}