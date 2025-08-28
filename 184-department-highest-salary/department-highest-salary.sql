select d.name as Department,e.name as Employee, e.salary as Salary
from employee e join department d
on d.id = e.departmentid
where(departmentid,salary) in (select departmentid,max(salary) from employee group by departmentid);