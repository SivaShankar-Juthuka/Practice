# Write your MySQL query statement below

SELECT Weather.id from Weather, Weather as W 
where DATEDIFF(Weather.recordDate, W.recordDate) = 1 and Weather.temperature > W.temperature order by id ;