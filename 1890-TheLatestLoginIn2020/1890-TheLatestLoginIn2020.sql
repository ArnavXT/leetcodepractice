-- Last updated: 11/19/2026, 5:56:22 PM
select user_id, max(time_stamp) as last_stamp
from logins
where time_stamp between "2020-01-01 00:00:00" and "2020-12-31 23:59:59"
group by user_id