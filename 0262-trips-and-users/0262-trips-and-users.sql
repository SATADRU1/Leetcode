# Write your MySQL query statement below

with banned_user as(
    select users_id 
    from Users 
    where banned = 'Yes'
)

select 
request_at as Day,
round(
    sum(if(status != 'completed', 1, 0)) / count(*) , 2
) as 'Cancellation Rate'
from Trips
where request_at  between '2013-10-01' and '2013-10-03'
and client_id not in (select * from banned_user) 
and driver_id not in (select * from banned_user) 
group by request_at 
