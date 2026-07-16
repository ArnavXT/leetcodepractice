-- Last updated: 7/16/2026, 4:37:20 PM
SELECT euni.unique_id, e.name 
FROM Employees e  
LEFT JOIN EmployeeUNI euni  
ON e.id = euni.id;