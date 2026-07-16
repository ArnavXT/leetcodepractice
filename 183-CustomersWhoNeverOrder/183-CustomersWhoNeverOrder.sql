-- Last updated: 7/16/2026, 4:38:34 PM
SELECT name as Customers
from Customers
where id not in (
    select customerId
    from Orders
);