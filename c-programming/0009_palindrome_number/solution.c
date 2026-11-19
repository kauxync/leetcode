/*
 * Problem: LeetCode 9 - Palindrome Number
 * 
 * Explanation:
 * Negative numbers or numbers ending in 0 (except 0) cannot be palindromes.
 * Reverse only the second half of the digits and compare it with the first half.
 * This avoids integer overflow.
 * 
 * Time Complexity: O(log10(n))
 * Space Complexity: O(1)
 */

#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int revertedNumber = 0;
    while (x > revertedNumber) {
        revertedNumber = revertedNumber * 10 + x % 10;
        x /= 10;
    }

    return x == revertedNumber || x == revertedNumber / 10;
}
