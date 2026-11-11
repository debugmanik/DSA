# Write your MySQL query statement below
select Email 
from person
GROUP BY Email 
having count(*)>1;