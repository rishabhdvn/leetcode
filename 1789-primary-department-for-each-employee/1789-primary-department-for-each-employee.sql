SELECT e1.employee_id,e1.department_id
FROM Employee e1
WHERE primary_flag='Y'
UNION
SELECT e1.employee_id,e1.department_id
FROM Employee e1
WHERE primary_flag='N'
AND
e1.employee_id NOT IN(
    SELECT employee_id FROM  Employee WHERE primary_flag='Y'
);
