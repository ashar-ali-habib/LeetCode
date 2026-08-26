-- Write your PostgreSQL query statement below
select P.firstName, lastName, city, state 
from Person P left join Address A on P.personId = A.personId
