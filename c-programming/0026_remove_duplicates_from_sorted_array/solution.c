/*
 * Problem: LeetCode 26 - Remove Duplicates from Sorted Array
 * 
 * Explanation:
 * Keep a write pointer k initialized to 1. Loop through the array from
 * index 1: whenever a number is different from the previous one, place it
 * at index k and increment k. Returns the number of unique elements.
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k++] = nums[i];
        }
    }

    return k;
}
