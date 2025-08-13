SELECT email
FROM Person
GROUP BY email
HAVING COUNT(Distinct id)>1

