#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Island
    Perimeter
    """
    sum_of_ls = []
    height = 0
    for ls in grid:
        sum_of_ls.append(sum(ls))
    for i in sum_of_ls:
        if i is 1:
            height += i
    height += 1
    width = max(sum_of_ls)
    return perimeter(height, width)


def perimeter(height, width):
    """Perimeter"""
    if height == 0 or width == 0:
        return 0
    return (height + height) + (width + width)
