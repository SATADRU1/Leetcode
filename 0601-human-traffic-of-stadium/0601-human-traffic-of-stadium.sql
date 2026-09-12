# Write your MySQL query statement below
with x as(

    select id, visit_date, people,
    id - row_number() over (order by id) as abc
    from Stadium 
    where people >= 100 
),

y as (
    select abc 
    from x 
    group by abc 
    having count(*) >= 3
)

select x.id, x.visit_date, x.people
from x
join y 
on x.abc = y.abc
order by x.visit_date asc
