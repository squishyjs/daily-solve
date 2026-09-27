-- need to order by match_date (last 5 only) -> ORDER BY match_date DESC LIMIT 5
-- include match_id, player_1, player_2, winner, match_date, score
-- need to join tables?
SELECT
    Matches.match_id,
    Matches.player_1,
    Matches.player_2,
    Matches.winner,
    Matches.match_date,
    Players.score
FROM
    Matches
JOIN Players
    ON Matches.winner = Players.player_name
ORDER BY
    Matches.match_date DESC
LIMIT 5;
/*
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
*/
