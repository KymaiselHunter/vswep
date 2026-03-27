import copy

def main():
    print("yee")

    matrix = list()
    matrix.append(['#', '#', '=', '=', '=', '*', '*', '@', '@'])
    matrix.append(['#', '#', '=', '@', '@', '*', '*', '@', '@'])
    matrix.append(['#', '#', '@', '@', '@', '*', '*', '@', '%'])
    matrix.append(['+', '+', '=', '=', '*', '*', '@', '@', '%'])
    matrix.append(['+', '+', '+', '+', '*', '@', '@', '@', '%'])

    for row in matrix:
        print(row)

    print(find_largest_candy_group(matrix, '='))
    print(find_largest_candy_group(matrix, '@')) 
    print(find_largest_candy_group(matrix, '%'))

    assert find_largest_candy_group(matrix, '=') == 4
    find_largest_candy_group(matrix, '@') == 10
    find_largest_candy_group(matrix, '%') == 3

def find_largest_candy_group(map, char) -> int:
    grid = copy.deepcopy(map)

    out = -1

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is None or grid[i][j] != char:
                continue

            bsf = [(i,j)]
            count = 0

            while bsf:
                curr = bsf.pop(0)
                row, col = curr[0], curr[1]

                # print(grid,row,col)
                if not inBoundsHelper(grid, row, col):
                    continue

                if grid[row][col] is None or grid[row][col] != char:
                    continue

                grid[row][col] = None
                count += 1

                bsf += [(row+1, col), (row-1, col), (row, col+1), (row,col-1)]

            out = max(out, count)
    return out

def inBoundsHelper(grid, row: int, col: int) -> bool :
    rowCount = len(grid)
    if row < 0 or row >= rowCount:
        return False
    
    colCount = len(grid[row])
    if col < 0 or col >= colCount:
        return False
    return True



if __name__ == "__main__":
    main()