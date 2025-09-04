SELECT id, COUNT(*) AS num
FROM (
    SELECT accepter_id AS id, requester_id AS other
    FROM RequestAccepted
    UNION ALL
    SELECT requester_id AS id, accepter_id AS other
    FROM RequestAccepted
) AS all_relations
GROUP BY id
ORDER BY num DESC
LIMIT 1;
