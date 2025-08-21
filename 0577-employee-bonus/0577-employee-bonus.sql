SELECT e.name,b.bonus
FROM Employee e
LEFT JOIN Bonus b
on e.empId=b.empId
WHERE b.bonus IS NULL OR b.bonus<1000

