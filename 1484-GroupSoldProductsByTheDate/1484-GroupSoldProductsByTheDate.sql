-- Last updated: 10/6/2026, 2:14:26 PM
select sell_date, count(distinct product) as num_sold, group_concat(distinct product order by product) as products
from activities
group by sell_date
order by sell_date

