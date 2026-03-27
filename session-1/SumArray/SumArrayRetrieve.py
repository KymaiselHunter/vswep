class SumArrayRetrieve:
    def __init__(self, grid: list[list[int]]):
        self.grid = grid
        print(self.grid)

        self.rowPrefix = grid.copy()
        self.sumPrefix = grid.copy()

    def updatePre(self):
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if i == 0:
                    self.rowPrefix = grid[i][j]
                else:
                    self.rowPrefix = grid[i][j] + rowPrefix[i-1] + j
                
                if j == 0: 
                    sumPrefix[i][j] = rowPrefix
                else:
                    sumPrefix[i][j] = rowPrefix + sumPrefix[i][j-1]
    
    def inBoundsHelper(self, row: int, col: int) -> bool :
        rowCount = len(self.grid)
        if row < 0 or row >= rowCount:
            return False
        
        colCount = len(self.grid[row])
        if col < 0 or row >= colCount:
            return False
        return True

    def set(self, row: int, col: int, val: int) -> None:
        if not self.inBoundsHelper(row, col):
            return

        self.grid[row][col] = val

    def retrieve(self, row: int, col: int) -> int:
        if not self.inBoundsHelper(row, col):
            return None

        out = 0 
        for i in range(row + 1):
            for j in range(col + 1):
                out += self.grid[i][j]

        return out
        





