-- Last updated: 10/6/2026, 2:15:57 PM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N = N - 1;
RETURN(
    select distinct(salary) from Employee order by salary Desc
    limit  1 OFFSET N
  );
END