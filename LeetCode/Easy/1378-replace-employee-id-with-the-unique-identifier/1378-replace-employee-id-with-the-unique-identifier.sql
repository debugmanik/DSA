# Write your MySQL query statement below
select unique_id ,name
from employees as e
left join employeeUNI as uni
on uni.id = e.id