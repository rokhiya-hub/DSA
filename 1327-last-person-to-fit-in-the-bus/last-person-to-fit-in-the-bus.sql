with cte as (select queue.*,sum(weight) over(order by turn) as w from queue)
Select person_name from cte
where turn = (select max(turn) from cte where w <=1000);