
SELECT ad.actor_id,ad.director_id
FROM ActorDirector ad
GROUP BY ad.actor_id, ad.director_id=1
HAVING COUNT(*)>=3
