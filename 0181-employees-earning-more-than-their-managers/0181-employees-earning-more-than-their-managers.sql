# Write your MySQL query statement below

select a.name as Employee
from Employee as a
join 
Employee as b
on b.id = a.managerId
where a.salary > b.salary 
