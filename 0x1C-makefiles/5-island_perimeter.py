#!/usr/bin/python3
"""to calculate the perimeter of an island that is described in the grid"""


def island_perimeter(grid):
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 0:
                continue
            if column == 0 or grid[row][column - 1] == 0:
                perimeter += 1
            if column == len(grid[row]) - 1 or grid[row][column + 1] == 0:
                perimeter += 1
            if row == 0 or grid[row - 1][column] == 0:
                perimeter += 1
            if row == len(grid) - 1 or grid[row + 1][column] == 0:
                perimeter += 1
    return perimeter
