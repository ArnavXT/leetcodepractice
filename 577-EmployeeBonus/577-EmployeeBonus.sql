-- Last updated: 11/17/2026, 8:47:51 PM
# Write your MySQL query statement below
select e.name, B.bonus from Employee e
left join Bonus B on e.empID = B.empID
where Bonus < 1000 or Bonus is Null