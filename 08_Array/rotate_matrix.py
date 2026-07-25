from typing import List
class solution:
    def rotate(self, matrix: list[list[int]]):
        n = len(matrix)
        # ans = [[0]*n for _ in range(n)]
        # for i in range(n):
        #     for j in range(n):
        #         ans[j][n-1-i] = matrix[i][j] 
        # return ans
        for i in range(n):
            for j in range(i+1, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        for row in matrix: 
            row.reverse()
        return matrix
    
sol = solution()
print(sol.rotate([
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
]))