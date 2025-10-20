select e1.employee_id,e1.name,count(e2.employee_id) as reports_count,round(avg(e2.age),0) as average_age
from employees e1 
inner join employees e2
on e1.employee_id = e2.reports_to
group by e1.employee_id,e1.name
having count(e2.employee_id)>0
order by e1.employee_id asc,average_age desc,reports_count desc, e1.name desc;