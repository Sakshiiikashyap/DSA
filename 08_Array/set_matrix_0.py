from typing import List
class solution:
    def check(self, matrix):
        n = len(matrix)
        m = len(matrix[0])
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    # marks row
                    for col in range(m):
                        if matrix[i][col] != 0:
                            matrix[i][col] = -1
                    for row in range(n):
                        if matrix[row][j] != 0:
                            matrix[row][j] = -1
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == -1:
                    matrix[i][j] = 0
        return matrix
    
    def setZero(self, matrix):
        m = len(matrix[0])
        n = len(matrix)
        col = [0]*m
        row = [0]*n
        for i in range(n):
            for j in range(m):
                if matrix[i][j]==0:
                    row[i]=1
                    col[j]=1
        for i in range(n):
            for j in range(m):
                if row[i] == 1 or col[j] == 1:
                    matrix[i][j] = 0
        return matrix         
sol = solution()
print(sol.setZero ([
    [1, 1, 1, 1],
    [1, 0, 1, 1],
    [1, 1, 0, 1],
    [1, 0, 0, 1]
]))            
                