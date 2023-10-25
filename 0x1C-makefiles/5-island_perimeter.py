#!/usr/bin/python3
"""5-island_perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    :param grid: A list of list of integers representing the island.
    :return: The perimeter of the island.
    """
    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2

    return perimeter
