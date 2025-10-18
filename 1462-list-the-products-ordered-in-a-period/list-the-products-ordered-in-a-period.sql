/* Write your PL/SQL query statement below */
select p.product_name,sum(o.unit) as unit
from products p
join orders o
on p.product_id = o.product_id
where to_char(o.order_date,'MM-YYYY') = '02-2020'
group by p.product_id,p.product_name
having sum(o.unit) >= 100;