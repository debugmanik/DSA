 # Write your MySQL query statement below
SELECT Employee.name, Bonus.bonus
FROM Employee
left JOIN Bonus ON Employee.empid = Bonus.empid
WHERE Bonus.bonus < 1000 OR Bonus.bonus IS NULL;