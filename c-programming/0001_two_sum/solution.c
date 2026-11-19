/*
 * Problem: LeetCode 1 - Two Sum
 * 
 * Explanation:
 * Check every pair of numbers using two loops. If their sum equals
 * the target, allocate memory for the two indices and return them.
 * 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */

#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* res = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
