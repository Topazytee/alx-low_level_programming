#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, m, j):
    """It returns the number of water neighbors a cell has in a grid."""

    num = 0

    if m <= 0 or not grid[m - 1][j]:
        num += 1
    if j <= 0 or not grid[m][j - 1]:
        num += 1
    if j >= len(grid[m]) - 1 or not grid[m][j + 1]:
        num += 1
    if m >= len(grid) - 1 or not grid[m + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """It returns the perimeter of the island in grid."""

    perimeter = 0
    for m in range(len(grid)):
        for j in range(len(grid[m])):
            if grid[m][j]:
                perimeter += num_water_neighbors(grid, m, j)

    return perimeter
