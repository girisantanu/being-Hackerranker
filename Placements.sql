/*
Enter your query here.
*/



select s.Name from Students s
join Friends f on s.ID=f.ID
join Packages student_salary on s.ID=student_salary.ID
join Packages friend_salary on f.Friend_Id=friend_salary.ID

where friend_salary.Salary>student_salary.Salary
order by friend_salary.Salary
