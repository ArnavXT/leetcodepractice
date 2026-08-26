-- Last updated: 8/26/2026, 10:02:51 AM
# Write your MySQL query statement below
select Max(salary) as SecondHighestSalary from Employee where salary<(select Max(salary) from Employee)