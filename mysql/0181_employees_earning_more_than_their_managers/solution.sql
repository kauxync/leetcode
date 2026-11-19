/*
 * Problem: LeetCode 181 - Employees Earning More Than Their Managers
 * Difficulty: Easy
 * Language: MySQL / PostgreSQL
 * 
 * Explanation:
 * Perform an INNER JOIN on the Employee table with itself (self-join).
 * Match each employee's managerId to the manager's id, then filter
 * where the employee's salary is strictly greater than the manager's salary.
 */

# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m
    ON e.managerId = m.id
WHERE e.salary > m.salary;