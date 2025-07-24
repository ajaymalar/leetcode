# Write your MySQL query statement below
select e.name from employee e join(select managerid from employee where managerid is not null group by managerid having count(*)>=5) as m on e.id=m.managerid;