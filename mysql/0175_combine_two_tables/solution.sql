/*
 * Problem: LeetCode 175 - Combine Two Tables
 * Difficulty: Easy
 * Language: MySQL / PostgreSQL
 * 
 * Explanation:
 * Use a LEFT JOIN between the Person table and the Address table on personId.
 * A LEFT JOIN ensures all records from the Person table are preserved,
 * even if there is no corresponding matching address in the Address table
 * (filling missing city and state with NULL).
 */

# Write your MySQL query statement below
SELECT 
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
    ON p.personId = a.personId;