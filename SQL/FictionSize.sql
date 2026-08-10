/*Write a query to find the total count of books whose genre is Fiction.
Note: Output column name should be fiction_count.

Table name: Books
*/SELECT
    COUNT(*) AS fiction_count
FROM
    Books
WHERE
    genre = 'Fiction'
