/*
 * Problem: LeetCode 69 - Sqrt(x)
 * 
 * Explanation:
 * Use binary search between 1 and x. For each midpoint mid, compare
 * mid with x / mid to prevent integer overflow. If mid <= x / mid,
 * record mid as the candidate answer and search the right half; otherwise,
 * search the left half.
 * 
 * Time Complexity: O(log(x))
 * Space Complexity: O(1)
 */

int mySqrt(int x) {
    if (x < 2)
        return x;

    int left = 1;
    int right = x / 2;
    int answer = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Use x / mid to avoid integer overflow
        if (mid <= x / mid) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return answer;
}
