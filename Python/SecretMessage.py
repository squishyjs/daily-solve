import typing
import requests
from bs4 import BeautifulSoup # using bs4 for document parse

def create_grid_from_doc(url):
    response = requests.get(url)
    if response.status_code != 200:
        print("Failed to fetch document.")
        return

    soup = BeautifulSoup(response.text, 'html.parser')

    rows = soup.find_all('tr') # table rows
    data = []

    for row in rows[1:]:  # skip header row
        cells = row.find_all(['td', 'th'])
        if len(cells) != 3:
            continue
        try:
            x = int(cells[0].text.strip())
            char = cells[1].text.strip()
            y = int(cells[2].text.strip())
            data.append((x, y, char))
        except ValueError:
            continue

    if not data:
        print("No valid data found.")
        return

    # grid size
    max_x = max(x for x, y, c in data)
    max_y = max(y for x, y, c in data)

    grid = [[' ' for _ in range(max_x + 1)] for _ in range(max_y + 1)]

    # store characters
    for x, y, c in data:
        grid[y][x] = c

    for row in grid:
        print(''.join(row))


if __name__ == '__main__':

    create_grid_from_doc("https://docs.google.com/document/d/e/2PACX-1vTER-wL5E8YC9pxDx43gk8eIds59GtUUk4nJo_ZWagbnrH0NFvMXIw6VWFLpf5tWTZIT9P9oLIoFJ6A/pub")

