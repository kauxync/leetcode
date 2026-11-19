/*
 * Problem: LeetCode 182 - Duplicate Emails
 * Difficulty: Easy
 * Language: PostgreSQL
 *
 * Explanation:
 * Group rows by email and keep only those groups having more than one row.
 */

-- Write your PostgreSQL query statement below
SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(*) > 1;