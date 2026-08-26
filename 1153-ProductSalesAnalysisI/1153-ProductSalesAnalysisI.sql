-- Last updated: 8/26/2026, 10:01:07 AM
# Write your MySQL query statement below
select p.product_name, s.year, s.price
from sales s 
left join product p
on p.product_id =  s.product_id