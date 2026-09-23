SELECT
    DISTINCT Players.player_name,
    Players.score
FROM
    Players
JOIN Matches
    ON Players.player_name = Matches.winner
ORDER BY
    Players.score DESC
LIMIT 3;
