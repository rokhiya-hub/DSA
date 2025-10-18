select firstname,lastname,city,state 
from person p
left join address a
on p.personid = a.personid;
-- case
-- when p.personid not in a.personid then a.city = NULL and a.state = NULL;
