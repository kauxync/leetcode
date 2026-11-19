<?php
/*
 * Problem: LeetCode 69 - Sqrt(x)
 *
 * Explanation:
 * Use binary search between 1 and x. For each midpoint mid, compare
 * mid with intdiv(x, mid) to avoid floating point issues. If mid <= x / mid,
 * record mid as the candidate answer and search the right half; otherwise,
 * search the left half.
 *
 * Time Complexity: O(log(x))
 * Space Complexity: O(1)
 */

class Solution {

    /**
     * @param Integer $x
     * @return Integer
     */
    function mySqrt($x) {
        if ($x < 2) {
            return $x;
        }

        $left = 1;
        $right = intdiv($x, 2);
        $answer = 1;

        while ($left <= $right) {

            $mid = $left + intdiv($right - $left, 2);

            if ($mid <= intdiv($x, $mid)) {
                $answer = $mid;
                $left = $mid + 1;
            } else {
                $right = $mid - 1;
            }
        }

        return $answer;
    }
}