-- Last updated: 9/6/2026, 12:31:23 PM
# Write your MySQL query statement below
select distinct author_id as id from Views
where author_id = viewer_id 
order by id;