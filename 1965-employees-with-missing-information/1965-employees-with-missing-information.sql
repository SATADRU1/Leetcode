# Write your MySQL query statement below

-- select a.employee_id 
-- from 

--     ((select * from Employees as e left join Salaries as s on e.employee_id = s.employee_id )

--     union 

--     (select * from Employees as e right join Salaries as s on e.employee_id = s.employee_id ))

-- as a 
-- where a.name is NULL or a.salary is NULL
-- order by a.employee_id 

select e.employee_id 
from Employees as e
left join Salaries as s on e.employee_id = s.employee_id
where s.salary is NULL

union

select s.employee_id 
from Salaries as s
left join Employees as e on s.employee_id = e.employee_id
where e.name is NULL

order by employee_id
