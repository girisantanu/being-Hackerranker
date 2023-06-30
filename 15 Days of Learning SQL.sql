/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/


WITH a AS (SELECT DISTINCT submission_date, hacker_id, DENSE_RANK() OVER (PARTITION BY hacker_id ORDER BY submission_date) AS s1 FROM Submissions) 
,b AS (SELECT * FROM a WHERE DAY(submission_date) = s1)
,c AS (SELECT submission_date, COUNT(hacker_id) AS dh FROM b
      GROUP BY submission_date)
,d AS (SELECT submission_date, hacker_id, COUNT(hacker_id) AS ch, ROW_NUMBER() over (PARTITION BY submission_date ORDER BY COUNT(hacker_id) DESC, hacker_id) AS rn FROM Submissions
      GROUP BY submission_date, hacker_id)
SELECT d.submission_date, c.dh, d.hacker_id, H.name FROM Hackers AS H
INNER JOIN d ON d.hacker_id = H.hacker_id
INNER JOIN c ON c.submission_date = d.submission_date
WHERE d.rn = 1
ORDER BY d.submission_date
