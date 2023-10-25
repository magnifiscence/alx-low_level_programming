#!/usr/bin/python3
"""function that returns the perimeter of an island"""

def island_perimeter(grid):
    """
    it calculates perimeter of island described in grid
    """
    if not grid:
        return 0

    perimeter = 0
    rows, col = len(grid), len(grid[0])

    for x in range(rows):
        for y in range(col):
            if grid[x][y] == 1:
                perimeter += 4
                if x > 0 and grid[x - 1][y] == 1:
                    perimeter -= 2
                if y > 0 and grid[x][y - 1] == 1:
                    perimeter -= 2

    return perimeter
