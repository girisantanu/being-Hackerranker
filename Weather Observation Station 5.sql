/*
Enter your query here.
*/
select city, length(city) from station
where length(city) = (select min(length(city)) from station)
order by 1 asc limit 1
;
select city, length(city) from station
where length(city) = (select max(length(city)) from station)
order by 1 asc limit 1
;
