With Commontable AS
(SELECT * ,DENSE_RANK() OVER(ORDER BY salary DESC) AS r
FROM Employee)

SELECT IFNULL((SELECT salary  FROM CommonTable WHERE r=2 LIMIT 1),null) 
as  SecondHighestSalary
