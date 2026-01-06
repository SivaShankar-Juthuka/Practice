# Write your MySQL query statement below
Select first.name as Employee from Employee as first Join Employee as sec on first.managerId = sec.id where first.salary > sec.salary;