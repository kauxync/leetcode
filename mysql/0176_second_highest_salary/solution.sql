/*
 * Problem: LeetCode 176 - Second Highest Salary
 * Difficulty: Medium
 * Language: MySQL / PostgreSQL
 * 
 * Explanation:
 * To find the second highest distinct salary and return NULL if it doesn't exist,
 * we can select distinct salaries ordered descending with LIMIT 1 OFFSET 1.
 * Wrapping this query inside an outer SELECT automatically returns NULL if
 * there are fewer than two distinct salaries.
 */

SELECT (
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
