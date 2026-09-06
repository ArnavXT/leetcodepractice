-- Last updated: 9/6/2026, 12:31:07 PM
SELECT euni.unique_id, e.name 
FROM Employees e  
LEFT JOIN EmployeeUNI euni  
ON e.id = euni.id;