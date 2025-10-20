select e1.unique_id,e2.name 
from employeeuni e1 
right join employees e2 
on e1.id = e2.id;

