SELECT u.user_id, u.name, u.mail
FROM Users u
WHERE u.mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$'
  AND u.mail LIKE '%@leetcode.com';
