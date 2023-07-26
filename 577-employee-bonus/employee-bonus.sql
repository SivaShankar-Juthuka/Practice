# Write your MySQL query statement below

select emp.name, b.bonus FROM Employee as emp 
left join Bonus as b on emp.empId = b.empId where bonus <1000 or bonus is NULL;