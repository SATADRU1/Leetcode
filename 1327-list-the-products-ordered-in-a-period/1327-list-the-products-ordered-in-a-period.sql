# Write your MySQL query statement below


select p.product_name , sum(unit) as unit
from Products as p
left join Orders as o
on p.product_id = o.product_id 
where month(order_date) = 2 and year(order_date) = 2020
group by product_name
having unit >= 100