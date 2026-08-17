SELECT
    department,
    COUNT(employee_name) AS total_employees
FROM
    Employees
GROUP BY
    department
