-- Write your PostgreSQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from Employee e inner join Department d on e.departmentId = d.id
where e.salary in (select distinct e1.salary from Employee e1 where e1.departmentId = e.      departmentId order by e1.salary desc limit 3)