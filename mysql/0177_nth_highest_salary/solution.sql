/*
 * Problem: LeetCode 177 - Nth Highest Salary
 * Difficulty: Medium
 * Language: MySQL
 *
 * Explanation:
 * Decrement N by 1 so it can be used as an OFFSET, then select the Nth
 * distinct salary ordered descending. Wrapping in a scalar subquery returns
 * NULL automatically when fewer than N distinct salaries exist.
 */

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N - 1;
  RETURN (
      # Write your MySQL query statement below.
      SELECT DISTINCT salary
        FROM Employee
        ORDER BY salary DESC
        LIMIT 1 OFFSET N
  );
END