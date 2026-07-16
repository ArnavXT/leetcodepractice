-- Last updated: 7/16/2026, 4:38:37 PM
Select name as Employee from Employee e1 where 
salary > (select salary from Employee where id=e1.managerId)