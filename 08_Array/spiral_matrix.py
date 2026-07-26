from typing import List
class solution:
    def spiralMatrix(self, mat: list[list[int]]):
        n = len(mat)
        m = len(mat[0])
        ans = []
        top = 0
        right = m-1
        bottom = n-1
        left = 0
        while(top<=bottom and left<=right):
            for i in range(left, right+1):
                ans.append(mat[top][i])
            top += 1
            for i in range(top, bottom+1):
                ans.append(mat[i][right])
            right -= 1
            if top<=bottom:
                for i in range(right, left-1, -1):
                    ans.append(mat[bottom][i])
                bottom -= 1
            if left<=right:
                for i in range(bottom, top-1, -1):
                    ans.append(mat[i][left])
                left += 1
        return ans
sol = solution()
print(sol.spiralMatrix([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]))                
        
        
        