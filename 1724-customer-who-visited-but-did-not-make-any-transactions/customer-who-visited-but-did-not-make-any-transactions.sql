# Write your MySQL query statement below

SELECT customer_id, count(customer_id) as count_no_trans 
FROM Visits where visit_id not in ( SELECT visit_id from Transactions)
group by customer_id ;


# SELECT customer_id, count(customer_id) AS count_no_trans 
# FROM Visits WHERE visit_id EXCEPT (SELECT visit_id, amount from Transactions);