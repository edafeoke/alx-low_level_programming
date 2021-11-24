#!/usr/bin/python3
'''
size of an island module
'''

def island_perimeter(grid):
    '''
    returns the perimeter of the island described in grid
    '''
    perimeter = 0 
    
    for r in range(0, len(grid)):
        for c in range(0, len(grid[r])):
            if grid[r][c] == 1:
                if grid[r - 1][c] == 0:
                    perimeter += 1
                if grid[r + 1][c] == 0:
                    perimeter += 1
                if grid[r][c - 1] == 0:
                    perimeter += 1
                if grid[r][c + 1] == 0:
                    perimeter += 1
    return perimeter
