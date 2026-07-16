-- Last updated: 7/16/2026, 4:38:38 PM
select p.firstName, p.lastName,
       (select a.city from Address a where a.personId = p.personId) as city,
       (select a.state from Address a where a.personId = p.personId) as state
from Person p;