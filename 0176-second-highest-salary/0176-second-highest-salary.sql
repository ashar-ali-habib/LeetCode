-- Write your PostgreSQL query statement below
select max(e.salary) as SecondHighestSalary
from Employee e 
where e.salary < (select max(e1.salary) from Employee e1)