SELECT 
    r.contest_id,
    ROUND(
        (IFNULL(COUNT(r.user_id) / NULLIF((SELECT COUNT(*) FROM Users), 0), 0)) * 100,
        2
    ) AS percentage
FROM Users u
LEFT JOIN Register r
       ON u.user_id = r.user_id
WHERE r.contest_id IS NOT NULL
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;
