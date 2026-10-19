-- Last updated: 10/19/2026, 11:25:56 AM
# Write your MySQL query statement below
select s.SCORE, Count(s2.SCORE) as 'rank' from SCORES s,
(SELECT DISTINCT SCORE FROM SCORES)  s2
WHERE s.SCORE<=s2.SCORE 
GROUP BY s.ID 
ORDER BY s.SCORE DESC;