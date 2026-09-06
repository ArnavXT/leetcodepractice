-- Last updated: 9/6/2026, 12:31:34 PM
# Write your MySQL query statement below
select p.product_name, s.year, s.price
from sales s 
left join product p
on p.product_id =  s.product_id