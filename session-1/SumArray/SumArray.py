class SumArray:
    def __init__(self, grid: list[list[int]]):
        print("constructed")
        self.grid = grid
        print(self.grid)
    
    def inBoundsHelper(self, row: int, col: int) -> bool :
        rowCount = len(self.grid)
        if row < 0 or row >= rowCount:
            return False
        
        colCount = len(self.grid[row])
        if col < 0 or col >= colCount:
            return False
        return True

    def set(self, row: int, col: int, val: int) -> None:
        print("we want to set the value at row", row, "and col", col, "to value", val)
        if not self.inBoundsHelper(row, col):
            print("out of index set")
            return

        self.grid[row][col] = val

    def retrieve(self, row: int, col: int) -> int:
        if not self.inBoundsHelper(row, col):
            print("out of index retrieval")
            return None

        out = 0 
        for i in range(row + 1):
            for j in range(col + 1):
                out += self.grid[i][j]

        return out
        





