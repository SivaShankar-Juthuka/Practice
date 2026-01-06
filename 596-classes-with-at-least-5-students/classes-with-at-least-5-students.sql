# Write your MySQL query statement below

-- SELECT customer_number from Orders Group by customer_number order by count(customer_number) DESC LIMIT 1;
SELECT class from Courses GROUP BY class having count(class) >= 5;