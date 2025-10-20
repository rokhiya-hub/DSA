SELECT distinct p.product_id, p.product_name 
from product p 
join sales s
on p.product_id = s.product_id
WHERE s.sale_date BETWEEN '2019-01-01' AND '2019-03-31' 
and s.product_id not in (select product_id from sales where sale_date < '2019-01-01' or sale_date > '2019-03-31');

