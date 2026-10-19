-- Last updated: 10/19/2026, 11:25:54 AM
# Write your MySQL query statement below
Select distinct i1.num as ConsecutiveNums
from logs i1, logs i2, logs i3
where i1.id = i2.id+1 AND
i2.id = i3.id + 1 AND 
i1.num=i2.num AND
i2.num=i3.num