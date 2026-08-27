-- Write your PostgreSQL query statement below
select distinct l.num as ConsecutiveNums
from Logs l
where l.num = (select l1.num from Logs l1 where l1.id = l.id + 1)
and l.num = (select l2.num from Logs l2 where l2.id = l.id + 2)

